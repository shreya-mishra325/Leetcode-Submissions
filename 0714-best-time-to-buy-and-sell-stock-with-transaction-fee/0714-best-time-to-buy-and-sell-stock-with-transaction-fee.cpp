class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int hold=-prices[0];
        int cash=0;
        for(int i=0; i<prices.size(); i++){
            int newHold=max(hold,cash-prices[i]);
            int newCash=max(cash,hold+prices[i]-fee);
            hold=newHold;
            cash=newCash;
        }
        return cash;
    }
};