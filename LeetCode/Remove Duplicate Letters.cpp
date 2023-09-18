#include<iostream>
#include<string>
#include<unordered_map>
#include<set>


using namespace std;

class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map<char, int> lastChar;
        for(int i=0; i<s.size(); i++) lastChar[s[i]] = i;

        string res = "";
        set<char> visited;
        for(int i=0; i<s.size(); i++){
            if(visited.find(s[i]) != visited.end()) continue;

            while(res.size() > 0 && s[i] < res.back() && lastChar[res.back()] > i){
                visited.erase(res.back());
                res.pop_back();
            }

            visited.insert(s[i]);
            res += s[i];
        }

        return res;
    }
};