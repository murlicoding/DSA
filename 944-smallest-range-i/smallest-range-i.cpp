class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int a=INT_MAX;
        int b=INT_MIN;
        
            for(int j=0;j<nums.size();j++){
                
                b=max(b,nums[j]);
                a=min(a,nums[j]);
            }
        
        return max(0,b-a-2*k);
    }
};