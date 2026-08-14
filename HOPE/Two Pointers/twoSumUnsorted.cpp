#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> twoSumII(vector<int> &nums, int target){
	int n = nums.size();
	unordered_map<int, int> mpp;
	
	for(int i=0;i<n;i++){
		
		int needed = target - nums[i];
		
		if(mpp.find(needed) != mpp.end()){
			return {mpp[needed], i};
		}
		
		mpp[nums[i]] = i;
	}

	
	return {};
	
}

int main(){
	vector<int> nums = {3,2,4};
	
	vector<int> ans = twoSumII(nums, 6);
	
	for(auto x : ans) cout <<x <<" ";
	
	return 0;
	
}
