class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res;
        res.push_back(0);
        if(n < 1) return res;

        res.push_back(1);
        int bound = 1;
        int boundNum;
        for(int i=2; i<=n; i++){
            if(bound <= int(log2(i))){
                bound = int(log2(i));
            }
            boundNum = pow(2, bound -1);
            if(i - pow(2, bound) < boundNum){
                res.push_back(res[i-boundNum]);
            }else{
                res.push_back(res[i-boundNum] + 1);
            }
            
        }
        return res;
    }
};