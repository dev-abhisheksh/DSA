#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int distinctElementInEveryWindow(vector<int> &nums, int k){
    int n =nums.size();
    int count=0;
    int low=0;
    
    unordered_map<int, int> freq;
    vector<int> result;

    for(int high=0;high<n;high++){
        freq[nums[high]]++;

        while(freq[nums[high]] > 2){
            freq[nums[low]]--;
            if(freq[nums[low]] == 0) freq.erase(nums[low]);
            low++;
        }
    }

}

int main(){
    vector<int> nums={1,2,1,3,4,2,3};
    return 0;
}