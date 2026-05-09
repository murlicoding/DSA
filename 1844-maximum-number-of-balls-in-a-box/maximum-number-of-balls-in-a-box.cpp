class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int,int>mp;
        int ans=0;
        for(int i=lowLimit;i<=highLimit;i++){
            int n=i;
            int sum=0;
            while(n>0){
                sum+=n%10;
                n=n/10;
            }
            mp[sum]++;
            ans=max(ans,mp[sum]);
        }
        return ans;
    }
};