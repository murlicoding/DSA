class Solution {
public:
    string reversePrefix(string s, int k) {
        if(k==1 || k>s.size()) return s;
        reverse(s.begin(),s.begin()+k);
        return s;
    }
};