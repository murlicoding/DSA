class Solution {
public:
string ans(string word){
    reverse(word.begin(),word.end());
    return word;

}
    string reverseWords(string s) {
        stringstream a(s);
        string word;
      string b="";
        while(a>>word){
            if(!b.empty()) b+=" ";
            b+=ans(word);
        
        }
       
        return b;
    }
};