class Solution {
public:
    bool isPrefixString(string t, vector<string>& words) {
        int i=0;
        string s="";
        while(i<words.size()){
            s+=words[i];
        if(s==t) return true;
         else if(s.size()>t.size()) return false;
         i++;}
         return false;
    }
};