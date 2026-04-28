class Solution {
public:
    string reverseByType(string s) {
        string letters = "", special = "";
        for(auto ch:s){
            if(isalpha(ch)) letters+=ch;
            else special+=ch;
        }
        reverse(letters.begin(),letters.end());
        reverse(special.begin(),special.end());
        int i=0,j=0;
        for(int k=0;k<s.size();k++){
            if(isalpha(s[k])) {s[k]=letters[i];i++;}
            else{s[k]=special[j];j++;}
        }
        return s;
    }
};