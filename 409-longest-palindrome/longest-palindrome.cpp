class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        int n=s.size(),c=0;
        for(auto x:s) mp[x]++;
        for(auto x:mp){
         if(x.second%2==1) c++;
        }
        if(c==0) return n;
        return n-c+1;
    }
};