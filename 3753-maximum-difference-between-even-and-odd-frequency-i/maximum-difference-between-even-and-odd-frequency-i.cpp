class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int>mp;
        for(auto x:s)mp[x]++;
        vector<int>a,b;
        for(auto x:mp){
            if(x.second%2==0)a.push_back(x.second);
            else b.push_back(x.second);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        return b[b.size()-1] - a[0];
    }
};