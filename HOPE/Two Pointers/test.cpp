#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums){
	int n = nums.size();
	
	sort(nums.begin(), nums.end());
	vector<vector<int>> ans;
	
	for(int i=0;i<n;i++){
		if(i>0 && nums[i] == nums[i-1]) continue;
		int need = -nums[i];
		
		int left = i+1;
		int right = n-1;
		
		while(left < right){
			int sum = nums[left] + nums[right];
			if(sum == need){
				ans.push_back({nums[i], nums[left], nums[right]});
				left++;
				right--;
				while(left < right && nums[left] == nums[left-1]) left++;
				while(left < right && nums[right] == nums[right+1]) right--;
			}else if(sum > need){
				right--;
			}else left++;
		}
	}
	return ans;
}

int main(){
	vector<int> nums={-1,0,1,2,-1,-4};
	
	vector<vector<int>> result = threeSum(nums);
	
	for(auto x : result){
		for(auto y : x) cout <<y <<" ";
		cout <<endl;
	}
	
	return 0;
}
