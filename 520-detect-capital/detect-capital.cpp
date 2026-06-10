class Solution {
public:
    bool detectCapitalUse(string word) {
        int d=0;
        for(auto c:word){
            if(c>='A' && c<='Z') d++;
        }
        if(d==word.size() || d==0 ||(d==1 && word[0]>='A' && word[0]<='Z'))
        return true;
        else 
        return false;
    }
};