class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<string>st1,st2;
        for(auto x:s){
            if(x=='#') {
            if(!st1.empty()) st1.pop();}
            else st1.push(string(1,x));
        }
        for(auto x:t){
            if(x=='#') {
            if(!st2.empty()) st2.pop();}
            else st2.push(string(1,x));
        }
        return st1==st2;
    }
};