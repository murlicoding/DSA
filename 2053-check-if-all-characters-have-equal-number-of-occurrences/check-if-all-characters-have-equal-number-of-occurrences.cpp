class Solution {
public:
    bool areOccurrencesEqual(string s) {
    unordered_map<char,int>mp;
    int b=0;
    for(auto x:s){
        mp[x]++;
    
    
        b=mp[x];
    }
    for(auto x:mp){
        if(x.second!=b) return false;
    }
    return true;
    }
};