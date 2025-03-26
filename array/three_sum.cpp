#include<iostream>
#include<vector>

using namespace std;

class Solution {
public: 
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result = {};
        vector<int> newNums = nums;
        stable_sort(newNums.begin(), newNums.end());
        int size = nums.size();
        for(int i = 0; i < size - 1; i++){
            if(i > 0){
                if(newNums[i] == newNums[i -1]) continue;
            }
            int j = i + 1;
            int k = size - 1;
            while(j < k) {
                int sum = newNums[i] + newNums[j] + newNums[k];
                if(sum == 0) {
                    result.push_back({newNums[i], newNums[j], newNums[k]});
                    j += 1;
                    while(newNums[j] == newNums[j - 1] && j < k){
                        j += 1;
                    }
                } else if(sum > 0){
                    k -= 1;
                } else {
                    j += 1;
                }
            }
        }
        return result;
    }
};
