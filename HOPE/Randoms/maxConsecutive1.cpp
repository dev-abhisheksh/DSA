#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int maximumNumberOfConsecutive1s(vector<int> &nums){
    int n = nums.size();
    int low = 0;
    int ans = INT_MIN;

    unordered_map<int, int> mpp;

    for(int high=0;high<n;high++){
        mpp[nums[high]]++;

        while(mpp[0] > 1){
            mpp[nums[low]]--;
            if(mpp[nums[low]] == 0) mpp.erase(nums[low]);
            low++;
        }
        int len = high - low +1;
        ans = max(ans, len);
    }

    return ans;
}

int main(){
    vector<int> nums={1,1,0,1,1,0,1};
    cout <<maximumNumberOfConsecutive1s(nums);
    return 0;
}