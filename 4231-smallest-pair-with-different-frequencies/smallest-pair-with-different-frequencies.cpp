class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        map<int,int>mp;
        vector<int>ans,keys;
        for(auto x:nums){
            mp[x]++;
        }
        for(auto x:mp){
            ans.push_back(x.first);
            keys.push_back(x.second);
        }
        for(int i=0;i<ans.size();i++){
            for(int j=i+1;j<ans.size();j++){
                if(keys[i]!=keys[j]) return {ans[i],ans[j]};
            }
        }
    
         return {-1,-1};
    }
};