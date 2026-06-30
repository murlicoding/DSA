class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>ans;
        int n=s.size();
     
     
        for(int i=0;i<n;i++){
            int l=i;
            int r=i;
            int f=INT_MAX;
            int d=INT_MAX;
            while(l>=0){
            if(s[l]==c){
                f=i-l;
                break;
            }
            l--;}
            while(r<n){
            if(s[r]==c){
                d=r-i;
                break;
            }
            r++;}
               ans.push_back(min(f,d));
            }
    
        return ans;
    }
};