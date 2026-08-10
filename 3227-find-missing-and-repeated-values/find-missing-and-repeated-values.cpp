class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>ans,sum,s;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                ans.push_back(grid[i][j]);
            }
        }
        unordered_map<int,int>mp;
        for(auto x:ans){
            mp[x]++;
        }
        for(auto x:mp){
            if(x.second>1) sum.push_back(x.first);
            s.push_back(x.first);
        }
        sort(s.begin(),s.end());
        for(int i=0;i<s.size()-1;i++){
            if(s[i+1]-s[i]>1){
                for(int j=s[i]+1;j<s[i+1];j++){
                    sum.push_back(j);
                }
            }
        }
        int n = grid.size() * grid.size();

        if(s[0] != 1)
            sum.push_back(1);

        if(s.back() != n)
            sum.push_back(n);

       return sum;
    }
};