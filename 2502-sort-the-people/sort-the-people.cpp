class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map<int,string>mp;
        for(int i=0;i<names.size();i++){
            
                mp[heights[i]]=names[i];
            
        }
        vector<int>ans;
        for(auto x:mp){
          ans.push_back(x.first);
        }
        sort(ans.rbegin(),ans.rend());
        vector<string>anss;
        for(auto x:ans){
            anss.push_back(mp[x]);
        }
        return anss;
    }
};