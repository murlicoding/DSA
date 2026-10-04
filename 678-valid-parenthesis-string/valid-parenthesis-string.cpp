class Solution {
public:
    bool checkValidString(string s) {
        int a=0,b=0;
        for(auto x:s){
            if(x=='('){
                a++;
                b++;
            }
            else if(x==')'){
                a--;
                b--;
            }
            else {
                a--;
                b++;
            }
            if(b<0)return false;
            if(a<0)a=0;

        }
        if(a==0)return true;
        return false;
    }
};