#include <iostream>
#include <vector>
using namespace std;

int minSizeSubarraySum(vector<int> &nums, int target)
{
    int n = nums.size();
    int sum = 0;
    int ans = INT_MAX;
    int low = 0;

    for (int high = 0; high < n; high++)
    {
        sum += nums[high];

        while (high < n && sum >= target)
        {
            ans = min(ans, high - low + 1);
            sum -= nums[low];
            low++;
        }
    }
    return (ans == INT_MAX) ? 0 : ans;;
}

int main()
{
    vector<int> nums = {2, 3, 1, 2, 4, 3};
    cout << minSizeSubarraySum(nums, 7);
    return 0;
}