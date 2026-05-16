class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        
        int b;
        vector<int>c;
        for(auto x:nums){
            mp[x]++;
        }
        for(int i=0;i<k;i++){
            int a=INT_MIN;
        for(auto y : mp){
            if(y.second>a){
                a=y.second;
                b=y.first;
            }
            
            
            }
            c.push_back(b);
            mp.erase(b);
        }
        return c;
    }
};