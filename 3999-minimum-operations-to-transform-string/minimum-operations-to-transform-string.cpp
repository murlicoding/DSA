class Solution {
public:
    int minOperations(string s) {
        int c=0;
        for(auto x:s){
            if(x!='a')c=max(c,26-(x-'a'));
        }return c;
    }
};