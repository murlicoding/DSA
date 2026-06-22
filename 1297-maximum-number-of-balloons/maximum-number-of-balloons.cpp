class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>mp;
        for(auto x:text){
            mp[x]++;
        }
       int x= min({mp['b'], mp['a'], mp['n'], mp['l']/2, mp['o']/2});
       return x;
    }
};