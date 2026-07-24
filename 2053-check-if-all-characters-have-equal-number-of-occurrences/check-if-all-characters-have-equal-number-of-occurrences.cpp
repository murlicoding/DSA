class Solution {
public:
    bool areOccurrencesEqual(string s) {
    unordered_map<char,int>mp;
    for(auto x:s){
        mp[x]++;
    }
    int b=0;
    for(auto x:mp){
        b=x.second;
    }
    for(auto x:mp){
        if(x.second!=b) return false;
    }
    return true;
    }
};