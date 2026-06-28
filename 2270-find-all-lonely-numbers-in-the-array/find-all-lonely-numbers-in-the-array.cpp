class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(auto x:nums) mp[x]++;
        for(auto x:mp){
            if(x.second==1){
                if(!mp.count(x.first-1) && !mp.count(x.first+1))
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};