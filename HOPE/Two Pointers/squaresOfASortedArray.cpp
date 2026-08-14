#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

 vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();

        vector<int> ans(n);
        
		for(int i=0;i<n;i++){
			nums[i] = abs(nums[i]);
		}
		
		int left = 0;
		int right = n-1;
		int idx = n-1;
		
		while(left < right){
			if(abs(nums[left])> abs(nums[right])){
				ans[idx] = nums[left] * nums[left];
				left++;
				idx--;
			}else{
				ans[idx] = nums[right] * nums[right];
				right--;
				idx--;
			}
		}
		


        return ans;
    }

int main(){
	vector<int> nums={-4,-1,0,3,10};
	
	vector<int> ans = sortedSquares(nums);
	
	for(auto x : ans) cout <<x <<" ";
	
	return 0;
}
