class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0,minlen=nums.size()+1,sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(sum>=target){
                minlen=min(minlen,i-l+1);
                sum-=nums[l];
                l++;
            }
        }
        if (minlen==nums.size()+1) return 0;
        return minlen;
    }
};