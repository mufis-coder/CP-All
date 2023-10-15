#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void findComb(vector<int> candidates, int target, 
                    int ind, vector<int> temp, vector<vector<int>> &res){
        if(ind >= candidates.size()) {
            if(target == 0) res.push_back(temp);
            return;
        }

        if(candidates[ind] <= target){
            temp.push_back(candidates[ind]);
            findComb(candidates, target-candidates[ind], ind, temp, res);
            temp.pop_back();
        }
        findComb(candidates, target, ind+1, temp, res);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> res;
        findComb(candidates, target, 0, {}, res);

        return res;        
    }
};