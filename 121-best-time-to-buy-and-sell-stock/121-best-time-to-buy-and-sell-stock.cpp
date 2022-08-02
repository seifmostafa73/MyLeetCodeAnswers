class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyindex = 0;
        int sellindex = 1;
        int profit = 0;
        while(sellindex < prices.size())
        {
            if(prices[buyindex] > prices[sellindex])
            {
                buyindex = sellindex;
            }
            else
            {
                profit = max(profit , prices[sellindex]-prices[buyindex]);
            }
            //cout<<"start : "<< buyindex<< " end : "<<sellindex<<" profit : "<<profit <<endl;
            sellindex++;
        }
        
        return profit;
    }
    
   
};