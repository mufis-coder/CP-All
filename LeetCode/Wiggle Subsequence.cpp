#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int setStatus(int diff){
        int status;
        if(diff<0) status = -1;
        else if(diff==0) status = 0;
        else status = 1;

        return status;
    }
    
    int wiggleMaxLength(vector<int>& nums) {
        int counter = 2;
        if(nums.size() < 1) {
            return 0;
        }
        if(nums.size() < 2){
            return 1;
        }
        int status = setStatus(nums[1] - nums[0]);
        if(status==0) counter--;
        int currStatus;

        for(int i=1; i<nums.size()-1; i++){
            int diff = nums[i+1] - nums[i];
            currStatus = setStatus(diff);

            if(status == 0){
                if(currStatus == 0) continue;
                else{
                    status = currStatus;
                    counter ++;
                }
            } else{
                if(currStatus == status || currStatus == 0) continue;
                else{
                    status = currStatus;
                    counter ++;
                }
            }
            
        }
        return counter;
        
    }
};