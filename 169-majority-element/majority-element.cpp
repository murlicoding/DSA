class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n<=1) return nums[0];
        int f=n/2;int c=1;
    for(int i=0;i<n-1;i++){
        if(nums[i]==nums[i+1])c++;
        else c=1;
        if(c>f) return nums[i];
    }
    return 0;
    }
};