#include <iostream>
#include <vector>
using namespace std;

float maxAverageSubarray(vector<int> &nums, int s){
    int n = nums.size();
    int left=0;
    float sum=0, maxSum=0;

    for(int right=0;right<n;right++){
        sum += nums[right];
        while(right-left + 1 == s){
            maxSum = max(sum, maxSum);
            sum -= nums[left];
            left++;
        }
    }
    return maxSum / s;
}

int main()
{
    vector<int> nums = {1, 12, -5, -6, 50, 3};
    cout <<maxAverageSubarray(nums, 4);
    return 0;
}