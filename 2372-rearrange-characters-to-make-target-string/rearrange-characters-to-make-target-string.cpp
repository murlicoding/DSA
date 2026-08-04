class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int>mp,sp;
        for(auto x:s){
          mp[x]++;
        }
        for(auto x:target){
          sp[x]++;
        }
        int ans=INT_MAX;
        for(auto x:sp){
            char ch=x.first;
            int need =x.second;
            if(mp[ch]<need) return 0;
            ans=min(ans,mp[ch]/need);
        }
        return ans;

    }
};