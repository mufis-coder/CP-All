#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    string sortString(string str) { 
        sort(str.begin(), str.end()); 
        return str;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;

        unordered_map<string, vector<int>> mp;
        for(int i=0; i<strs.size(); i++){
            string str = sortString(strs[i]);
            mp[str].push_back(i);
        }

        for (auto i : mp) {
            vector<string> tempAns;
            for(int j : i.second) {
                tempAns.push_back(strs[j]);
            }
            ans.push_back(tempAns);
        }
        
        return ans;
    }
};