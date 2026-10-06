class Solution {
public:
    int minAddToMakeValid(string s) {
        int ans=0,o=0;
        for(auto x:s){
            if(x=='(')ans++;
            else {
                if(ans>0)ans--;
                else o++;
            }
        }
        
        return o+ans;

    }
};