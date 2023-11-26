#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> ans;

        for(int j=0; j<matrix[0].size(); j++){
            vector<int> tempAns;
            for(int i=matrix.size() - 1; i>=0; i--){
                tempAns.push_back(matrix[i][j]);
            }
            ans.push_back(tempAns);
        }

        matrix = ans;
    }
};