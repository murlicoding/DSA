class Solution {
public:
    int countSeniors(vector<string>& details) {
        int c=0;
        for(auto p:details){
            int x=0;
            x=(p[11]-'0')*10+(p[12]-'0');
            if(x>60) c++;
        }
        return c;
    }
};