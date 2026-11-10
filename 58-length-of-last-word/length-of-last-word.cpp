class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        while(n>0 && s[n-1]==' '){
            n--;
        }
        int i=n;
        while(i>0 && s[i-1]!=' '){i--;}
        return n-i ;
    }
};