class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
            for(int j=0;j<s.size();j++){
                if(t[j]!=s[j]) return t[j];
            }
        
        return t[t.size()-1];
    }
};