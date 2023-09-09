#include <vector>
#include<iostream>

using namespace std;

class Solution {
public:
    int findArea(int h, int p1, int p2){
        int widthCurr = p2 - p1;
        int areaCurr = h*widthCurr;
        return areaCurr;
    }

    int maxArea(vector<int>& height) {
        int len = height.size();

        int pos1 = 0;
        int pos2 = len-1;
        int area = 0;
        while(pos1 <= pos2){
            int areaCurr = findArea(min(height[pos1], height[pos2]), pos1, pos2);
            if(area<areaCurr){
                area = areaCurr;
            }
            if(height[pos1] < height[pos2]){
                pos1++;
            }else{
                pos2--;
            }
        }
        return area;
    }
};

int main(){
    Solution sol;

    int N;
    cout << "Enter how many input: ";
    cin >> N;

    cout << "Enter the input: ";
    vector<int> heights;
    while(N--){
        int a;
        cin >> a;
        heights.push_back(a);
    }

    cout << "Result: " << sol.maxArea(heights) << endl;
    return 0;
}