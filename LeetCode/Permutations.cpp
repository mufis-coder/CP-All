#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    void permuteRecursive(vector<int>& nums, int i, int j, vector<vector<int>>& result){
        if(i==j){
            result.push_back(nums);
        }
        for(int k=i; k<=j; k++){
            swap(nums[i], nums[k]);
            permuteRecursive(nums, i+1, nums.size()-1, result);
            swap(nums[i], nums[k]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        permuteRecursive(nums, 0, nums.size()-1, result);
        return result;
    }
};