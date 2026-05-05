class Solution {
public:
    bool canJump(vector<int>& nums) {
       int m=0;
       int ans=0;
       for(int i=0;i<nums.size();i++){
         if(i > ans) return false; 
        m=nums[i]+i;
        ans=max(ans,m);
       } 
       if(ans>=nums.size()-1) return true;
       return false;
    }
};