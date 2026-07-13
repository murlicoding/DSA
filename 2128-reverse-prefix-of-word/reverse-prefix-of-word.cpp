class Solution {
public:
    string reversePrefix(string word, char ch) {
        int y;
        for(int i=0;i<word.size();i++){
            if(word[i]==ch) {y=i; break;}
            else if(i==word.size()-1) return word;
        }
        reverse(word.begin(),word.begin()+y+1);
        return word;
    }
};