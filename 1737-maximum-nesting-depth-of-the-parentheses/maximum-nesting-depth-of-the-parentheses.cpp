class Solution {
public:
    int maxDepth(string s) {
        int a=INT_MIN,ans=0;
        for(auto x:s){
            if(x=='(')ans++;
            else if(x==')')ans--;
             a=max(a,ans);
        }return a;
    }
};