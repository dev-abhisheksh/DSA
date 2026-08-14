#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int longestLenghtWithoutRepeatingCharacters(string &s){
    int n = s.size();
    int low = 0;
    int ans = INT_MIN;
    unordered_map<char, int> mpp;

    for(int high=0;high<n;high++){
        mpp[s[high]]++;

        while(mpp[s[high]] > 1){
            mpp[s[low]]--;
            if(mpp[s[low]] == 0) mpp.erase(s[low]);
            low++;
        }
        int len = high-low+1;
        ans = max(ans, len);
    }
    return ans;
}

int main(){
    string s = "abcabcbb";
    cout <<longestLenghtWithoutRepeatingCharacters(s);
    return 0;
}