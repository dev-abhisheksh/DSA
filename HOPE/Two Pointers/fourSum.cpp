	#include<iostream>
	#include<vector>
	#include<algorithm>
	using namespace std;
	
	vector<vector<int>> fourSum(vector<int> &nums, int target){
		int n = nums.size();
		
		vector<vector<int>> ans;
		
		sort(nums.begin(), nums.end());
		
		for(int i=0;i<n-3;i++){
			if(i>0 && nums[i] == nums[i-1]) continue;
			for(int j=i+1;j<n-2;j++){
//				if(j>i && nums[j] == nums[i]) continue;
				int left = j+1;
				int right = n-1;
				
				while(left < right){
					int sum = nums[i] + nums[j] + nums[left] + nums[right];
					if(sum == target){
						ans.push_back({nums[i], nums[j], nums[left], nums[right]});
						left++;
						right--;
						while(left < right && nums[left] == nums[left-1]) left++;
						while(left < right && nums[right] == nums[right+1]) right--;
					}else if(sum > target){
						right--;
					}else left++;
				}
			}
		}
		return ans;
	}
	
	int main(){
		vector<int> nums={2,2,2,2,2};
		
		vector<vector<int>> result = fourSum(nums,8);
		
		for(auto x : result){
			for(auto y : x) cout <<y <<" ";
			cout <<endl;
		}
		
		return 0;
	}
