class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int>mp;
        vector<char>ans1,ans2;
        int c=0;
        for(auto x:word)
            mp[x]++;
        for(auto x:mp){
        if(isupper(x.first))
            ans1.push_back(x.first);
            else ans2.push_back(x.first);
        }
        for(auto x:ans1){
            for(auto y:ans2){
                if(x==toupper(y))c++;
            }
        }
        return c;
        
    }
};