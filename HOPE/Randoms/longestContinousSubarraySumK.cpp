#include<iostream>
#include<vector>
using namespace std;

int longestContinousSubarraySumK(vector<int> &nums, int k){
	int n = nums.size();
	int sum = 0;
	int ans = INT_MIN;
	int low = 0;
	
	for(int high=0;high<n;high++){
		sum+= nums[high];
		
		while(sum > k){
			sum -= nums[low];
			low++;
		}
		int len = high-low+1;
		ans = max(ans, len);
	}
	return ans;
}

int main(){
	vector<int> nums={2, 1, 3, 2, 1, 1, 4};
	
	cout << longestContinousSubarraySumK(nums, 7);
	
	return 0;
}
