#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> twoSum(vector<int> &nums, int target){
    int n = nums.size();
    int left = 0, right = n-1;

    while(left < right){
        int sum = nums[left] + nums[right];
        if(sum == target){
            return {left, right};
        }else if(sum < target){
            left++;
        }else{
            right--;
        }
    }
    return {-1};
}

int main(){
    vector<int> nums={2,7,11,15};

    cout <<twoSum(nums, 9);

    return 0;
}