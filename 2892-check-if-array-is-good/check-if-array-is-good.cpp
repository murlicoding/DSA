class Solution {
public:
    bool isGood(vector<int>& nums) {
        int a = *max_element(nums.begin(), nums.end());
       if(nums.size()!=a+1) return false;
       sort(nums.begin(), nums.end());
       for(int i=0;i<nums.size()-1;i++){
        if(nums[i]!=i+1) return false;
       }
       return true;
    }
};