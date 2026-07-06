#include <iostream>
#include <vector>
using namespace std;

int maxSumSubarray(vector<int> &nums, int k)
{
    int n = nums.size();
    int left = 0;
    int sum = 0;
    int ans = INT_MIN;

    for (int high = 0; high < n; high++)
    {
        sum += nums[high];

        while (high - left + 1 == k)
        {
            ans = max(ans, sum);
            sum -= nums[left];
            left++;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {2, 1, 5, 1, 3, 2};
    cout << maxSumSubarray(nums, 3);
    return 0;
}