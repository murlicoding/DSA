class Solution {
public:
    int percentageLetter(string s, char letter) {
    int c=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==letter) c++;
    }
    int z=s.size();
    
    return c*100/z;
    }
};