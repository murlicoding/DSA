class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int a=INT_MIN;
        int b=INT_MIN;
        int c;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>a) {a=nums[i];
            c=i;}
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>b && nums[i]<a) b=max(b,nums[i]);
        }
        if(a>=2*b) return c;
        return -1;
    }
};