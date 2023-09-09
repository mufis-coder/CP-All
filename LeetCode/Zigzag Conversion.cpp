#include<iostream>
#include <string>
#include <set>

using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        int baseNum = numRows*2-3+1;
        if (baseNum <= 0){
            return s;
        }

        int loopNum = s.size() / baseNum + 2;

        string strRes = ""; 
        for (int i=0; i<numRows; i++){
            set<int> uniqueNumbers;
            for (int j=0; j<loopNum; j++){
                uniqueNumbers.insert(j*baseNum - i);
                uniqueNumbers.insert(j*baseNum + i);
            }
             for (int num : uniqueNumbers) {
                if (num >=0 && num < s.size()){
                    strRes += s[num];
                }
            }
        }


        return strRes;
    }
};

int main(){
    Solution sol;

    string str;
    int rows;

    cout << "Type the string: ";
    cin >> str;
    cout << "Type the number of rows: ";
    cin >> rows;

    cout << sol.convert(str, rows) << endl;

    return 0;
}