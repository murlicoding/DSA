class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int l=strs.size()-1;
        string s=strs[0];
        string t=strs[l];
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]==t[i]) ans+=s[i];
            else break;
        }
        return ans;
    }
};