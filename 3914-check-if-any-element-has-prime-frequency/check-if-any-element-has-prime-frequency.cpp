class Solution {
public:
    bool isPrime(int x){
        if(x<2) return false;
        for(int i=2;i*i<=x;i++){
            if(x%i==0) return false;
        }
        return true;
    }
    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        for(auto x:mp){
            if(isPrime(x.second)) return true;
        }
        return false;
    }
};