class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int l = 0;
        
        int result = 0;
        
        for(int r = 1; r<prices.size(); ++r){
            if(prices[l] > prices[r])
                l=r;
            result = max(result, prices[r]-prices[l]);
        }
        
        return result;
        
    }
};