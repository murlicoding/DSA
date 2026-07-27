class Solution {
public:
    string truncateSentence(string s, int k) {
        stringstream ss(s);
        string word;
        string t="";
        while(k-- && ss>>word){
            if(!t.empty()) t+=" ";
            t+=word;
        }
        return t;
    }
};