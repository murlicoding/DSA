class Solution {
public:

    string processStr(string q) {
        
        string s;
        for(auto c:q){
            if(islower(c)) s.push_back(c);
            else if(c=='*'){
                if(!s.empty())
                s.pop_back();
            }
            else if(c=='#'){
                s+=s;
            }
            else if(c=='%'){
                reverse(s.begin(),s.end());
            }
        }
        return s;
    }
};