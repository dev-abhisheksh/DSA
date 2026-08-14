#include<iostream>
#include<vector>
using namespace std;

vector<int> mergeSortedArray(vector<int> &nums1, vector<int> &nums2){
	int n = nums1.size();
	int m = nums2.size();
	int idx = 0;
	
	int ptr1 = 0;
	int ptr2 = 0;
	
	vector<int> ans(m+n);
	
	while(ptr1 < n && ptr2 < m){
		if(nums1[ptr1] < nums2[ptr2]){
			ans[idx] = nums1[ptr1];
			idx++;
			ptr1++;
		}else{
			ans[idx] = nums2[ptr2];
			idx++;
			ptr2++;
		}
	}
	
	while(ptr1 < n){
		ans[idx] = nums1[ptr1];
			idx++;
			ptr1++;
	}
	
	while(ptr2 < m){
		ans[idx] = nums2[ptr2];
			idx++;
			ptr2++;
	}
	
	
	return ans;
}

int main(){
	vector<int> nums1 = {1,3,5};
	vector<int> nums2 = {2,4,6};
	
	vector<int> result = mergeSortedArray(nums1, nums2);
	
	for(auto x : result) cout <<x <<" ";
	
	return 0;
}
