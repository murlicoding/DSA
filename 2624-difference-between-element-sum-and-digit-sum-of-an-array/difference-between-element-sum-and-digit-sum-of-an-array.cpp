class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int digit=0,sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int a=nums[i];
            while(a>0){
                digit+=a%10;
                a/=10;
            }
        }
        return abs(sum-digit);
    }
};