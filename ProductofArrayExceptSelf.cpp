// Based on the example above, it seems that by looping twice, once from the left and once from the right, the calculation can be simplified. The sum of the numbers to the left of an index can be calculated during the left-to-right loop, and the sum of the numbers to the right can be calculated during the right-to-left loop. This way, it seems possible to perform the calculation without skipping over the current index.


// Yahan mera algorithm yeh h ki main pehle main output naam ka ek vector banayunga usko 1 se initialize ke doonga 

// Fir main left ko left se loop start karoonga usme output ka 1 of index ko multiply kardoonga left ko 

// fir main left ko multiply kardoonga nums[i] ko

#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        vector<int> productExceptSelf(vector<int>& nums) {
            vector<int> output(nums.size(), 1);
    
            int left = 1;
            for (int i = 0; i < nums.size(); i++) {
                output[i] *= left;
                left *= nums[i];
            }
    
            int right = 1;
            for (int i = nums.size() - 1; i >= 0; i--) {
                output[i] *= right;
                right *= nums[i];
            }
    
            return output;        
        }
    };