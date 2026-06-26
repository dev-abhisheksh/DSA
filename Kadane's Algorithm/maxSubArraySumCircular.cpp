#include <iostream>
#include <vector>
using namespace std;

//Given an array , the task is to find the max subarray but the twist is the array is circular means the last number and the first are the same for eg. arr[5,-3,5]. Here if we add all numbers the total comes to 5+(-3)+5=7, now if we skip -3 and start from the last to the first the sum would be 5+5=10, At the last just return max(maxSum, totalSum - minSum). Basically trach both max and min

int maxSubArraySumCircular(vector<int> &nums)
{
    int totalSum = nums[0];                      //To keep a sum of all the elements in the array
    int currMax = nums[0], maxSum = nums[0];     //To keep a sum of max current value and max maximum subarray value in the array
    int currMin = nums[0], minSum = nums[0];     //To keep a sum of min current value and min minimum subarray value in the array

    for (int i = 1; i < nums.size(); i++)
    {
        totalSum += nums[i];                    //Add all the element while in loop runs

        currMax = max(nums[i], currMax + nums[i]); 
        maxSum = max(maxSum, currMax);

        currMin = min(nums[i], currMin + nums[i]);
        minSum = min(minSum, currMin);
    }

    if(maxSum < 0) return maxSum;               //if the maxSum is smaller than zero, it means all the values are negative in the array
    return max(maxSum, totalSum - minSum);
}

int main()
{
    vector<int> nums = {5, -3, 5};

    cout <<maxSubArraySumCircular(nums);

    return 0;
}