#include <iostream>
#include <vector>
using namespace std;

vector<int> moveZeroes(vector<int> &nums)
{
    int n = nums.size();
    int left = 0, right = 0;

    if (n < 1)
        return nums;

    while (right < n)
    {
        if (nums[right] != 0)
        {
            swap(nums[right], nums[left]);
            left++;
        }
        right++;
    }

    return nums;
}

int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};

    vector<int> ans = moveZeroes(nums);

    for (auto x : ans)
        cout << x << " ";

    return 0;
}