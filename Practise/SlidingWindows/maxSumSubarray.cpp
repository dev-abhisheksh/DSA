#include<iostream>
#include<vector>
using namespace std;

int maxSumSubarray(vector<int> &nums, int k){
    int n = nums.size();
    int maxSum=INT_MIN;
    int sum=0, low=0;

    for(int high = 0;high<n;high++){
        sum+= nums[high];
        while(high -low+1 == k){
            maxSum = max(sum, maxSum);
            sum -= nums[low];
            low++;
        }
    }
    return maxSum;
}

int main(){
    vector<int> nums={2,1,5,1,3,2};
    cout<<maxSumSubarray(nums, 4);
    return 0;
}