#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> result;
        result.push_back({1});
        if(rowIndex<1) return result[0];
        
        result.push_back({1, 1});

        for(int i=2; i<=rowIndex; i++){
           vector<int> res;
           res.push_back(1);

            for(int j=1; j<=i-1; j++){
                res.push_back(result[i-1][j-1] + result[i-1][j]);
            }

            res.push_back(1);
            result.push_back(res);
        }

        return result[rowIndex];
    }
};
