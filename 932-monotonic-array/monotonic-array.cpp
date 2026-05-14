class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int c=0;
        int b=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]<=nums[i]) c++;;
        }
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]>=nums[i]) b++;
        }
        return (c==nums.size()-1 || b==nums.size()-1);
    }
};