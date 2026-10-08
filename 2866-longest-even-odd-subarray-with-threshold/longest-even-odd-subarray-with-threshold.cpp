class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int l,r=nums.size(),ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0 && nums[i] <= threshold){
                l=i;
                ans=max(ans,1);
                for(int j=l;j<r-1;j++){
                    if(nums[j]>threshold || nums[j+1]>threshold ||
                    nums[j]%2==nums[j+1]%2 )
                    break;
                    ans=max(ans,j-l+2);
                }
            }
        }
        return ans;
    }
};