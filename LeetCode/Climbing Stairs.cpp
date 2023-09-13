class Solution {
public:
    int climbStairs(int n) {
        vector<int> prevStep;
        prevStep.push_back(1);
        prevStep.push_back(2);

        for(int i=2; i<n; i++){
            prevStep.push_back(prevStep[i-1] + prevStep[i-2]);
        }

        return prevStep[n-1];
    }
};