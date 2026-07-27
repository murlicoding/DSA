class Solution {
public:
    int getLeastFrequentDigit(int n) {
        int r=INT_MAX;
        int z;
        unordered_map<int,int>mp;
        string s="";
        while(n>0){
            int m=n%10;
            mp[m]++;
            n/=10;
        }
        
        for(auto x:mp){
            if(x.second<r) {r=x.second;z=x.first;}
            else if (x.second == r) {
                z = min(z, x.first);
            }
        }
        return z;
    }
};