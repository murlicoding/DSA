class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        map<int,int>mp;
        vector<int>ans;
        for(auto x:nums){
            mp[x]++;
        }
        for(auto x:mp){
            int cnt = min(x.second, k);
            
            for(int i=0;i<cnt;i++){
            ans.push_back(x.first);
           }
        }
        return ans;
    }
};