class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int c=nums[nums.size()/2];
        unordered_map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        for(auto x:mp){
            if(x.first==c){
                if(x.second==1)return true;
            }
        }
        return false;
    }
};