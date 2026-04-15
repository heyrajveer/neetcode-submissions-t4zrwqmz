class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int result=0;
        for(auto it:prices){
            mini=min(mini,it);
            result = max(result,it-mini);
        }
        return result;
    }
};
