#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//vector<vector<int>> threeSum(vector<int> &nums){
//	int n = nums.size();
//	
//	int left=0;
//	int right=n-1;
//	vector<vector<int>> ans;
//	
//	sort(nums.begin(), nums.end());
//	
//	while(left < right){
//		int sum = nums[left] + nums[right];
//		if(sum == 0){
//			ans.push_back({nums[left], nums[right]});
//			left++;
//			right--;
//		}else if(sum > 0){
//			right--;
//		}else{
//			left++;
//		}
//	}
//	
//	return ans;
//}

vector<vector<int>> threeSum(vector<int> &nums){
	int n = nums.size();
	
	sort(nums.begin(), nums.end());
	vector<vector<int>> ans;
	
	for(int i=0;i<n;i++){
		int need = -nums[i];
		
		int left = i+1;
		int right = n-1;
		
			while(left < right){
			int sum = nums[left] + nums[right];
				if(sum == need){
				ans.push_back({nums[left], nums[right], nums[i]});
				left++;
				right--;
				}else if(sum > need){
					right--;
				}else{
					left++;
				}
			}
		}
		return ans;
	}
	
	


int main(){
	vector<int> nums={-1,0,1,2,-1,-4};
	
	vector<vector<int>> result = threeSum(nums);
	for(auto x : result) {
    for(auto y : x) {
        cout << y << " ";
    }
    cout << endl;
}
	
	return 0;
}
