// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

// Find two lines that together with the x-axis form a container, such that the container contains the most water.

// Return the maximum amount of water a container can store.

// Notice that you may not slant the container.


#include<iostream>
#include<vector>

using namespace std;


// Solution 1
#include <iostream>  
#include <vector>  
#include <algorithm> // For std::max  
using namespace std;  

class Solution {  
public:  
    int maxArea(vector<int>& height) {  
        int n = height.size();  
        int result = 0;  
        int left = 0, right = n - 1;  

        while (left < right) {  
            int currentArea = min(height[left], height[right]) * (right - left);  
            result = max(currentArea, result);  

            if (height[left] < height[right]) {  
                left++;  
            } else {  
                right--;  
            }  
        }  
        return result;  
    }  
};  



//Solution2

// class Solution {
// public: 
//     int maxArea(vector<int>& height) {
//         long result = 0;
//         long n = height.size();
//         for(long i = 0; i < n - 1; i++) {
//             for(long j = i + 1; j < n; j++){
//                 long newMax = min(height.at(i), height.at(j)) * (j - i);
//                 result = max(newMax, result);
//             }
//         }
//         return result;
//     }
// };

int main(){
    int result = Solution.maxArea([1,8,6,2,5,4,8,3,7]);
    cout << result;
    return 0;
}