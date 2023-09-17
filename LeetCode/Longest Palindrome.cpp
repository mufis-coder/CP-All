#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;
class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> maping;

        for(int i=0; i<s.size(); i++){
            if(maping.find(s[i]) != maping.end()){
                maping[char(s[i])] += 1;
            }else{
                maping[char(s[i])] = 1;
            }
        }

        int odd = 0;
        int counter = 0;
        for (auto x : maping) {
            if(x.second%2 == 0){
                counter += x.second;
            }else{
                if(x.second > 1){
                    counter += x.second - 1;
                    odd = 1;
                }else{
                    odd = 1;
                }
            }
        }
        
        return counter + odd;
    }
};