#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool isPalindrome(string &s){
	int n = s.size();
	bool flag = true;
	
	int left =0;
	int right = n-1;
	
	while(left < right){
		if(s[left] != s[right]){
			flag = false;
		}
		left++;
		right--;
	}
	return flag;
}

int removeDublicateFromSortedArray(vector<int> &nums){
	int n = nums.size();
	int s = 0;
	int f = 0;
	int k=1;
	if(n == 1) return k;
	
	while(f < n){
		if(nums[s] != nums[f]){
			s++;
			swap(nums[s],nums[f]);
			k++;
		}
		f++;
	}
	
	return k;
}

vector<int> twoSum(vector<int> &nums, int target){
	int n = nums.size();
	int left = 0;
	int right = n-1;
	
	while(left < right){
		int sum = nums[left] + nums[right];
		if(sum == target){
			return {left+1, right+1};
		}else if(sum > target){
			right--;
		}else{
			left++;
		}
	}
	
	return {-1};
}

int main(){
	
	vector<int> nums{2,7,11,15};
	vector<int> ans = twoSum(nums,17);
	for(auto x : ans) cout <<x <<" ";
	return 0;
}
