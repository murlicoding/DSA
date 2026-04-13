class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l=0,q=1,r=nums.size()-1,count=0;
        while(q<=r){
            if(nums[l]!=nums[q]){
            l++;
            nums[l]=nums[q];
            }
            q++;
        }
    return l+1;
    }
};