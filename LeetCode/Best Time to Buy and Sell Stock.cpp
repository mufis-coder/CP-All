class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int currMin = prices[0];
        int globProf = -1*numeric_limits<int>::max();

        for(int i=1; i<prices.size(); i++){
            int prof = prices[i] - currMin;
            if(prices[i]<currMin) currMin = prices[i];
            if(globProf<prof) globProf = prof;
        }
        if(globProf<0){
            return 0;
        }
        return globProf;
    }
};