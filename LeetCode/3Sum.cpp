#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        vector<vector<int>> result;
        for(int i=0; i<nums.size(); i++){
            if(i>0 && nums[i] == nums[i-1]) {
                continue;
            }
            int p1 = i + 1;
            int p2 = nums.size() - 1;
            while(p1<p2){
                int target = -1*nums[i];
                if(nums[p1] + nums[p2] > target){
                    p2--;
                }else if (nums[p1] + nums[p2] < target){
                    p1++;
                } else{
                    vector<int> res {nums[i], nums[p1], nums[p2]};
                    result.push_back(res);
                    while(p1 < p2 && nums[p1] == res[1]){
                        p1++;
                    }
                    while(p1 < p2 && nums[p2] == res[2]){
                        p2--;
                    }
                }
            }
       
        }

        return result;
    }
};

int main(){
    Solution sol;

    int n;
    cout << "Total num? ";
    cin >> n;

    vector<int> numsInp;
    cout << "Enter nums? ";
    while(n--){
        int num;
        cin >> num;
        numsInp.push_back(num);
    }

    cout << "Result 3Sum: [";
    for (const auto& v : sol.threeSum(numsInp)){
        cout << "[";
        for (auto i : v)
        {
            cout << i << ", ";
        }
        cout << "], ";
    }
    cout << "]";
    return 0;
}