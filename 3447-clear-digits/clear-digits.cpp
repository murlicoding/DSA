class Solution {
public:
    string clearDigits(string s) {
        string t="";
       
       for(auto x:s){
        if(isdigit(x)){
            if(!t.empty())
            t.pop_back();
        }
        else
          t.push_back(x);
          
       }
       return t;
    }
};