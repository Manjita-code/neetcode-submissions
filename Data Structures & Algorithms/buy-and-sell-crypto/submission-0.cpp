class Solution {
public:
    int maxProfit(vector<int>& prices) {

    int pro=0;
    for(int i=0;i<prices.size();i++)
    {
        for(int j=i+1;j<prices.size();j++)
        {
            if(prices[i]<prices[j])
            {
                int a=prices[j]-prices[i];
                pro=max(a,pro);
            }
        }
    }
    return pro;        
    }
};
