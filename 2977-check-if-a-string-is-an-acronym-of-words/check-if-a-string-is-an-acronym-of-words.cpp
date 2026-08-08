class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string t="";
        for(auto x:words){
            t+=x[0];
        }
        return t==s;
    }
};