#include<iostream>
#include<vector>
using namespace std;

void squaresOfASortedArray(vector<int> &nums){
	int n = nums.size();
	
	for(int i=0;i<n;i++){
		nums[i] = abs(nums[i] * nums[i]);
	}
	
	vector<int> ans(n);
	
	int left = 0;
	int right = n-1;
	int idx = n-1;
	
	while(left < right){
		if(nums[left] > nums[right]){
			ans[idx] = nums[left];
			idx--;
			left++;
		}else{
			ans[idx] = nums[right];
			idx--;
			right--;
		}
	}
	
	for(auto x : ans) cout <<x <<" ";
	
//	return ans;
}

int main(){
	vector<int> nums={-4,-1,0,3,10};
	
	squaresOfASortedArray(nums);
	
//	for(auto x : answer) cout <<x <<" ";
	
	return 0;
}
