#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int fruitsInTheBasket(vector<int> &nums){
    int n = nums.size();

    int low = 0;
    int ans = INT_MIN;

    unordered_map<int , int> mpp;

    for(int high=0;high<n;high++){
        mpp[nums[high]]++;

        while(mpp.size() > 2){
            mpp[nums[low]]--;
            if(mpp[nums[low]] == 0) mpp.erase(nums[low]);
            low++;
        }
        int len = high-low+1;
        ans = max(ans, len);
    }
    return ans;
}

int main(){
    vector<int> nums={1, 1, 2, 2, 1};

    cout <<fruitsInTheBasket(nums);

    return 0;
}