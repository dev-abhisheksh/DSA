#include<iostream>
#include<vector>
using namespace std;

int secondLargestNumber(vector<int> &nums){
	int n = nums.size();
	
	int largest = INT_MIN;
	int sLargest = INT_MIN;
	
	for(int i=0;i<n;i++){
		if(nums[i] > largest){
			sLargest = largest;
			largest = nums[i];
		}else if(nums[i] > sLargest && nums[i] != largest){
			sLargest = nums[i];
		}
	}
	
	return sLargest;
}

int main(){
	vector<int> nums={10,5,20,8,15};
	
	cout <<secondLargestNumber(nums);
	
	return 0;
}
