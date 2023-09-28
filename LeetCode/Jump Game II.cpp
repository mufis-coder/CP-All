#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<int> findMax(vector<int>& nums, int farthest, int i){
        int resi=i;
        int far=farthest;

        for(int j=i; j<=farthest; j++){
            if(far < j + nums[j]){
                far = j + nums[j];
                resi = j;
            }
        }
        return {resi, far};
    }

    int jump(vector<int>& nums) {
        vector<int> indFar = {0, nums[0]};
        if(nums.size() <= 1) return 0;
        if(indFar[1] >= nums.size() - 1) return 1;

        int counter = 1;
        while(true){
            indFar = findMax(nums, indFar[1], indFar[0]);
            counter++;
            if(indFar[1] >= nums.size()-1) break;
        }

        return counter;
    }
};