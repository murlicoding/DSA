class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n=words.size();
        string t="";
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++){
            t+=words[i];
        }
        for(auto ch:t){
            mp[ch]++;
        }
        for(auto x:mp){
            if(x.second%n!=0) return false;
        }
        return true;
    }
};