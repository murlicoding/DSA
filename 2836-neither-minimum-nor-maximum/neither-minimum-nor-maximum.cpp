class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if(nums.size()<3) return -1;
        sort(nums.begin(),nums.end());
        if(nums[0]==nums[nums.size()-1]) return -1;
        return nums[1];
    }
};