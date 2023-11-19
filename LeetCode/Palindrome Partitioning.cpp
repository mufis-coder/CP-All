#include<stdio.h>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    bool isPalindrome(string inStr){
        if(inStr.size() < 1) return false;
        if(inStr.size() < 2) return true;
        int size = inStr.size();
        for(int i=0; i<=size/2; i++){
            if(inStr[i] != inStr[size-1-i]) return false;
        }
        return true;
    }

    void findAns(string s, int start, vector<vector<string>>* ans, vector<string> tempAns){
        if(start >= s.size()){
            ans->push_back(tempAns);
            return;
        }
        
        for(int len=1; len<=s.size() - start; len++){
            string temp = s.substr(start, len);
            if(isPalindrome(temp)){
                tempAns.push_back(temp);
                findAns(s, start + len, ans, tempAns);
                tempAns.pop_back();
            }
        }class Solution {
public:
    bool isPalindrome(string inStr){
        if(inStr.size() < 1) return false;
        if(inStr.size() < 2) return true;
        int size = inStr.size();
        for(int i=0; i<=size/2; i++){
            if(inStr[i] != inStr[size-1-i]) return false;
        }
        return true;
    }

    void findAns(string s, int start, vector<vector<string>>* ans, vector<string> tempAns){
        if(start >= s.size()){
            ans->push_back(tempAns);
            return;
        }
        
        for(int len=1; len<=s.size() - start; len++){
            string temp = s.substr(start, len);
            if(isPalindrome(temp)){
                tempAns.push_back(temp);
                findAns(s, start + len, ans, tempAns);
                tempAns.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> tempAns;
        findAns(s, 0, &ans, tempAns);
        return ans;
    }
};
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> tempAns;
        findAns(s, 0, &ans, tempAns);
        return ans;
    }
};