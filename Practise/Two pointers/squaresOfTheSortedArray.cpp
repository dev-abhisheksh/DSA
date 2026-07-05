#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> squaresOfTheSortedArray(vector<int> &nums)
{
    int n = nums.size();
    int left = 0, right = n - 1;

    vector<int> ans(n);
    int ptr = n - 1;

    while (left <= right)
    {
        if (abs(nums[left]) < abs(nums[right]))
        {
            ans[ptr] = nums[right] * nums[right];
            ptr--;
            right--;
        }
        else
        {
            ans[ptr] = nums[left] * nums[left];
            ptr--;
            left++;
        }
    }
}

int main()
{
    vector<int> nums = {-7, -3, 2, 3, 11};

    return 0;
}