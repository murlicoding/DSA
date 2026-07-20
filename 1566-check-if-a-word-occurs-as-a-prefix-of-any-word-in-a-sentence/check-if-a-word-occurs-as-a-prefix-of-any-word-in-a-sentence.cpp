class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        string word;
        int c=1;
        stringstream t(sentence);
        while(t>>word){
           if(word.find(searchWord)==0) 
           return c;
           else c++;
        }
        return -1;
    }
};