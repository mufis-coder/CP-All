#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> records;
        vector<int> result = {};
        for(int i=0; i<nums.size(); i++){
            int dif = target - nums[i];
            if(records.find(dif) == records.end()){
                records.insert({nums[i], i});
            }else{
                result = {records[dif], i};
                return result;
            }
        }
        return result;
    }
};