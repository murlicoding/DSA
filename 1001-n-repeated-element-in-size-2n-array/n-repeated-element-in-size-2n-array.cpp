class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>mp;int a;
for(auto x:nums){
    mp[x]++;
    if(mp[x]>1){a =x;break;}
}return a;
    }
};