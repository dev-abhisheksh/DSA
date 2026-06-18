// Q) Given an array, find the subarray with the maximum absolute sum — the subarray can have largest positive sum or largest negative sum (since abs of big negative is also big).

#include <iostream>
#include <vector>
using namespace std;

int maximumAbsoluteSumOfAnySubarray(vector<int> &nums)
{
    int maxSubarray = nums[0];      // to keep a track for the max value
    int minSubarray = abs(nums[0]); // to keep a track for the min value
    int ans = abs(nums[0]);         // in the question we need to absolute mins , using abs incase a single negative number exists

    for (int i = 0; i < nums.size(); i++)
    {
        maxSubarray = max(maxSubarray + nums[i], nums[i]);
        minSubarray = min(minSubarray + nums[i], nums[i]);
        ans = max(ans, max(maxSubarray, minSubarray));
    }

    return ans;
}

int main()
{
    vector<int> nums = {1, -3, 2, 3, -4};
    cout <<maximumAbsoluteSumOfAnySubarray(nums);
    return 0;
}