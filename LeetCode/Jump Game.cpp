#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int farthest = 0;
        for(int i=0; i<nums.size(); i++){
            farthest = max(farthest, i + nums[i]);
            if(farthest >= nums.size() - 1) return true;
            if(nums[i] == 0 && farthest == i) break;
        }
        return false;
    }
};