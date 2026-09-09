class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int sum=0;
        unordered_map<int,int>mp;mp[0]=-1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int r=sum%k;
            if(mp.find(r)!=mp.end()){
                if(i-mp[r]>1)return true;
            }
            else{
                mp[r]=i;
            }}
            return false;
        }
};