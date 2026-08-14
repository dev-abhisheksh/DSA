#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> segregateZeroesAndOnes(vector<int> &nums){
	int n = nums.size();
	
	int left = 0;
	int right = n-1;
	
	while(left < right){
		while(left < right && nums[left] == 0)left++;
		while(left < right && nums[right] == 1)right--;
		swap(nums[left], nums[right]);
	}
	
	return nums;
}

int main(){
	vector<int> nums= {0, 1, 0, 1, 0, 0, 1, 1, 1, 0};
	
	vector<int> ans = segregateZeroesAndOnes(nums);
	for(auto x : ans) cout <<x <<" ";
	
	return 0;
}
