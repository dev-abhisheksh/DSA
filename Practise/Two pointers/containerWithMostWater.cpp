#include<iostream>
#include<vector>
using namespace std;

int containerWithMostWater(vector<int> &nums){
    int n = nums.size();
    int left = 0, right=n-1;
    int width = 0;
    int minHeight = 0;
    int ans = 0;

    while(left < right){
        width = right - left;
        minHeight = min(nums[left], nums[right]);
        ans = max(ans, width * minHeight);
        if(nums[left] < nums[right]){
            left++;
        }else right--;
    }

    return ans;
}

int main(){
    vector<int> nums={1,8,6,2,5,4,8,3,7};
    return 0;
}