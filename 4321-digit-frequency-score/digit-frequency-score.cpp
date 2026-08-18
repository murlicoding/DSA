class Solution {
public:
    int digitFrequencyScore(int n) {
        string s=to_string(n);
        int sum=0;
        unordered_map<char,int>mp;
        for(auto x:s)mp[x]++;
        for(auto x:mp){
            sum+=((x.first-'0')*x.second);
        }return sum;
    }
};