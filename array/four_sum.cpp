// Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

// 0 <= a, b, c, d < n
// a, b, c, and d are distinct.
// nums[a] + nums[b] + nums[c] + nums[d] == target
// You may return the answer in any order.

#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int size = nums.size();
        if(size < 4) return vector<vector<int>>{};
        stable_sort(nums.begin(), nums.end());
        vector<vector<int>> result = {};
        for(int i = 0; i < size - 3; i++){
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            for(int j = i + 1; j < size - 2; j++){
                if(j > i + 1 && nums[j] == nums[j - 1]) continue;
                int left = j + 1;
                int right = size - 1;
                while(left < right){
                    long long sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[left] + (long long)nums[right];

                    if(sum == target){
                        result.push_back(vector<int>{nums[i], nums[j], nums[left], nums[right]});
                        left++; right--;
                        while(left < right && nums[left] == nums[left-1]) left++;
                        while(left < right && nums[right] == nums[right + 1]) right--;
                    } else if(sum < target){
                        left++;
                    } 
                    else {
                        right--;
                    }
                }
            }
        }
        return result;
    }
};
