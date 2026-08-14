#include<iostream>
#include<vector>
using namespace std;

int maximumSumSubarray(vector<int> &nums, int k){
	int n = nums.size();
	int maxi = INT_MIN;
	int low = 0;
	int sum = 0;
	
	for(int high = 0;high<n;high++){
		sum += nums[high];
		
		while(high-low+1 == k){
			maxi = max(maxi, sum);
			sum -= nums[low];
			low++;
			
		}
	}
	return maxi;
}

int main(){
	vector<int> nums={2, 1, 5, 1, 3, 2};
	
	cout <<maximumSumSubarray(nums, 3);
	return 0;
}
