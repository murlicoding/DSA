class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int>mp;
        int a=0;
        string t;
        for(auto  x:s){
            mp[x]++;
            t+=x;
            while(mp[x]>2){
                mp[t[0]]--;
                t.erase(0,1);
            }
            a=max(a,(int)t.size());
        }
        return a;
    }
};