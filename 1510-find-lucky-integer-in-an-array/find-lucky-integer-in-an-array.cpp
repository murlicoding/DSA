class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(auto x:arr){
            mp[x]++;
        }
        int m=-1;
        for(auto x:mp){
            if(x.first==x.second)
            m=max(m,x.first);
        }
        return m;
    }
};