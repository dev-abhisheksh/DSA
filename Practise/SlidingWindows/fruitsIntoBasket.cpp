#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int fruitsIntoBasket(vector<int> nums){
    int n = nums.size();

    int low=0;
    int ans = 0;
    unordered_map<int, int> freq;

    for(int high=0;high<n;high++){
        freq[nums[high]]++;

        while(freq.size() > 2){
            freq[nums[low]]--;
            if(freq[nums[low]] == 0) freq.erase(nums[low]);
            low++;
        }
        ans = max(ans, high-low+1);
    }
    return ans;
}

int main(){
    vector<int> nums={0,1,2,2};
    cout <<fruitsIntoBasket(nums);
    return 0;
}