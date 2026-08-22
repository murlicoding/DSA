class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        if(nums.size()<3)return -1;
        unordered_map<int,int>mp;
        int a=0,b=0,c=0;
        vector<int>ans;
        int an=INT_MAX;
        for(auto x:nums)mp[x]++;
        for(auto x:mp){if(x.second>=3)ans.push_back(x.first);}
        for(auto x:ans){
            for(int i=0;i<nums.size();i++){
                if(nums[i]==x){
                    a=i;
                   
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]==x){
                    b=j;
                   
            for(int k=j+1;k<nums.size();k++){
                if(nums[k]==x){
                    c=k;
                    
            an=min(an,abs(a - b) + abs(b - c) + abs(c - a));
            break;
        }
            }}}}}}
            if(an==INT_MAX)return -1;
        return an;
    }
};