class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>>ans;
        int c=0,d=0;
        for(int i=0;i<s.size()-1;i++){
              if(s[i]==s[i+1]) c++;
              else {d=c;c=0;
              if(d>=2){
                ans.push_back({i-d,i});
              }
        }}
         if (c >= 2) {
            ans.push_back({(int)s.size() - 1 - c, (int)s.size() - 1});
        }
        return ans;
    }
};