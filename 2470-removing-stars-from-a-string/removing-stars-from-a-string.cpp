class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        for(auto x:s){
            if(x=='*') st.pop();
            else st.push(x);
        }
        string t="";
        while(!st.empty()){
            t+=st.top();
            st.pop();
        }
        reverse(t.begin(),t.end());
        return t;
    }
};