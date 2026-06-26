#include <iostream>
#include <vector>
using namespace std;

// Maximum Product Subarray
// when we multiply a postive number by a postive the answer you gets it obviously greater for eg. 4*4=16
// Now try the same with a negative number , for eg 4*-4=-16 , where -16 < 16. So in order to get a bigger number out of negative is
// multiplying a smaller negaitve number

// So here we need to apply the same logic, if the numbers are negative , main maxPositive and maxNegative data

int maxProduct(vector<int> &nums)
{
    int n = nums.size(); 
    int currMax = nums[0]; //to track currMax
    int currMin = nums[0]; //to track currMin
    int ans = nums[0];     //final ans

    for (int i = 1; i < n; i++)
    {
        if (nums[i] < 0) swap(currMax, currMin);  //so basically we are swapping the values are because , suppose when we encounter a negative
                                                  // number, eg currMax = 6, currMin = -2, nums[i] = -3
                                                  // -3 * 6 = -18  currMax becomes smaller and vice-versa
                                                  // -3 * -2 = 6
        currMax = max(nums[i], currMax * nums[i]);
        currMin = max(nums[i], currMin * nums[i]);
        ans = max(ans, currMin);
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, -2, 0, 3};
    cout <<maxProduct(nums);
    return 0;
}