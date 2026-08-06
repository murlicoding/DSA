class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int sum=0;
        sort(nums.begin(), nums.end());
        while(k--){
            int n=nums.size();
            sum+=nums[n-1];
            nums[n-1]+=1;
        }
        return sum;
    }
};