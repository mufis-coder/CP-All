#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int locMax = nums[0];
        int globMax = nums[0];
        for(int i=1; i<nums.size(); i++){
            locMax = max(nums[i], nums[i]+locMax);
            if(locMax>globMax){
                globMax = locMax;
            }
        }

        return globMax;
    }
};