class Solution {
public:
    int countElements(vector<int>& nums) {
        int c=0;
        sort(nums.begin(),nums.end());
        for(auto x:nums){
            if(x>nums[0] && x<nums[nums.size()-1]) c++;
        }
        return c ;
    }
};