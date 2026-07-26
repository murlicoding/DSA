class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
      int ans=1;
        int c=1;
       for(int i=1;i<n;i++){
            if(nums[i]-nums[i-1]>0 ) c++;
            
            else c=1;
        
        ans=max(ans,c);
       }
        return ans;
    }
};