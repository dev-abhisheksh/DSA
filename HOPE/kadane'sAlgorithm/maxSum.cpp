#include<iostream>
#include<vector>
using namespace std;

int maxSum(vector<int> &nums){
    int n = nums.size();
    int ans = nums[0];
    int bestEnding = nums[0];

    for(int i=1;i<n;i++){
        int v1 = bestEnding + nums[i];
        int v2 = nums[i];

        bestEnding = max(v1, v2);
        ans = max(ans, bestEnding);
    }

    return ans;
}

int main(){
    vector<int> nums={-2,1,-3,4,-1,2};
    cout <<maxSum(nums);
    return 0;
}