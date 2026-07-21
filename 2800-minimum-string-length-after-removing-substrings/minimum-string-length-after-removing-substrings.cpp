class Solution {
public:
    int minLength(string s) {
        stack<char>st;
        
        for(auto x:s){
             st.push(x);
             char a=st.top();
             if(a=='B'){
                st.pop();
                if(!st.empty()){
                char b=st.top();
                if(b=='A') st.pop();
                else st.push(a);
                }
                else st.push(a);
             }
             else if(a=='D'){
                st.pop();
                if(!st.empty()){
                char b=st.top();
                if(b=='C') st.pop();
                else st.push(a);
                }
                else st.push(a);
             }
        }
        return st.size();
    }
};