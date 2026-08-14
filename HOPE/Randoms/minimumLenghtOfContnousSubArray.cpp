#include<iostream>
#include<vector>
using namespace std;

int minimumLengthOfContinousSubarray(vector<int> &nums, int k){
    int n = nums.size();
    int low = 0;
    int ans = INT_MAX;
    int sum = 0;

    for(int high=0;high<n;high++){
        sum+= nums[high];

        while(sum >= k){
            int len = high - low +1;
            ans = min(ans, len);
            sum -= nums[low];
            low++;
        }
    }
    return ans;
}

int main(){
    vector<int> nums={2, 3, 1, 2, 4, 3};

    cout <<minimumLengthOfContinousSubarray(nums, 7);

    return 0;
}