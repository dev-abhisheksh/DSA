#include<iostream>
#include<vector>
using namespace std;

int maxProduct(vector<int> &nums){
    int n = nums.size();
    int maxEnding = nums[0];
    int minEnding = nums[0];
    int ans = nums[0];
    // int result = nums[0];

    for(int i=0;i<n;i++){
        int v1 = maxEnding * nums[i];
        int v2 = minEnding * nums[i];
        int v3 = nums[i];

        maxEnding = max(v3, max(v1,v2));
        minEnding = min(v3, min(v1, v2));
        ans = max(ans, maxEnding);
    }
    return ans;
}

int main(){
    vector<int> nums={-2,3,-4};
    cout <<maxProduct(nums);
    return 0;
}