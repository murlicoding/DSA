class Solution {
public:
    string removeOuterParentheses(string s) {
        int count=0;
        string a;
        for(auto x:s){
            if(x=='('){
                if(count>0) a+=x;
                count++;
            }else{
                count--; 
                if(count>0)a+=x;
            }
        }
        return a;
    }
};