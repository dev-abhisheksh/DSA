#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int longestSubstringWithAtMostKDistinctCharacters(string &s){
    int n = s.size();

    int low = 0;
    int ans = INT_MIN;
    unordered_map<char, int> mpp;

    for(int high=0;high<n;high++){
        mpp[s[high]]++;

        while(mpp.size() > 2){
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
    string s = "ccaabbb";
    cout <<longestSubstringWithAtMostKDistinctCharacters(s);
    return 0;
}