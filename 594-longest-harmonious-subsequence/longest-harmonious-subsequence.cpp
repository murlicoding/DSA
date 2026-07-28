class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto x:nums) mp[x]++;
        int ans=0;
        for(auto x:mp){
              int t=x.first;
              if(mp.count(t+1)){
                ans=max(ans,mp[t]+mp[t+1]);
              }
        }
        return ans;
    }
};