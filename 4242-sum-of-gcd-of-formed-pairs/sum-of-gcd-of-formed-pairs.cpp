class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<long long>prefixGcd(nums.size(),0);
        long long sum=0;
        int mx=nums[0];
        prefixGcd[0] = gcd(nums[0], mx);
        for(int i=1;i<nums.size();i++){
            mx=max(mx,nums[i]);
            prefixGcd[i]=gcd((long long)nums[i],(long long)mx);
            
        }
        sort(prefixGcd.begin(),prefixGcd.end());
        int i=0;
        int j=prefixGcd.size()-1;
        while(i<j){
      sum+=gcd(prefixGcd[i],prefixGcd[j]);
      i++;
      j--;
        }
        return sum;
    }
};