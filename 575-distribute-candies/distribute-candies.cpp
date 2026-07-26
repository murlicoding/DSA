class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int,int>mp;
        for(auto x:candyType){
            mp[x]++;
        }
        int n=mp.size();
        int m=candyType.size()/2;
        if(m>n) return n;
        else return m;
    }
};