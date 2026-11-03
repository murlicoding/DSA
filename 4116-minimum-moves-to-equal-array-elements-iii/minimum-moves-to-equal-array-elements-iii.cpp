class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a=nums[nums.size()-1];
        int c=0;
        for(int i=0;i<nums.size();i++){
           c+=abs(a-nums[i]);
        }
        return c;
    }
};