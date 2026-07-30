class Solution {
public:
    int canBeTypedWords(string text, string b) {
        stringstream ss(text);
        string word;
        int c=0;
        while(ss>>word){
            bool ok=true;
            for(auto c:word){
        if(b.find(c)!=string::npos){ok=false;
        break;
        }}
        if(ok) c++;}
        return c;
    }
};