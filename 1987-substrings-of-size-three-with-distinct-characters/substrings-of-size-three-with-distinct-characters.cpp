class Solution {
public:

int add(string t){
    unordered_map<char,int>mp;
    for(auto x:t){
        mp[x]++;
    }
    for(auto x:mp){
        if(x.second>1) return 0;
    }
    return 1;

}
    int countGoodSubstrings(string s) {
        int ans=0;
        for(int i=0;i+2<s.size();i++){
             ans+=add(s.substr(i,3));
        }
        return ans;
    }
};