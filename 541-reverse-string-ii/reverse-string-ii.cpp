class Solution {
public:
    string reverseStr(string s, int k) {
        int m=s.size();
        for(int t=0;t<m;t+=2*k){
        int j=min(t+k-1,m-1);
        int i=t;
        while(i<j){
            swap(s[i],s[j]);
            i++;
            j--;
        }}
        return s;
    }
};