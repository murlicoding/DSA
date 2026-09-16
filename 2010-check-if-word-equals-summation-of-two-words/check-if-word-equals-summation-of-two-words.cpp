class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int a=0,b=0,c=0;
        for(auto x:firstWord){
          a=a*10+(x-'a');
        }
        for(auto x:secondWord){
          b=b*10+(x-'a');
        }
        for(auto x:targetWord){
          c=c*10+(x-'a');
        }
        return a+b==c;
    }
};