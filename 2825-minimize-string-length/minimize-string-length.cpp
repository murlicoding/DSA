class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_map<char,int>mp;
        
        for(auto x:s){
            mp[x]++;
        }
        
        return mp.size();
    }
};