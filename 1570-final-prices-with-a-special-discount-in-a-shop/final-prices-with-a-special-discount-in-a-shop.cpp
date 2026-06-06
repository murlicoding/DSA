class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>ans;
        for(int i=0;i<prices.size();i++){
            int a=prices[i];
            for(int j=i+1;j<prices.size();j++){
                if(prices[j]<=prices[i]) {
                    a=(prices[i]-prices[j]);
                    break;}
                    
            }
            ans.push_back(a);
        }
        return ans;
    }
};