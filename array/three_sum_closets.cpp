#incluse<iostream>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int size = nums.size();
        stable_sort(nums.begin(), nums.end());
        //-4 -1 1 2
        int minClosets = -1;
        int result = 0;
        for(int i = 0; i < size - 1; i++) {
            if(i > 0) { 
                if(nums[i] == nums[i-1]) continue;
            }
            int left = i + 1;
            int right = size - 1;
            while(left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                int tempMinClosets = abs(target - sum);
                if(minClosets == -1 || minClosets >= tempMinClosets) {
                    minClosets = tempMinClosets;
                    result = sum;
                    right -= 1;
                } else {
                    left += 1;
                }
            }
        }
        return result;
    }
};
