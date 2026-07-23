class Solution {
public:
   
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int ans=0,c=0;
        for(int i=0;i<nums.size();i++){
            int b=nums[i];
            while(b>0){
                if(b%10==digit)c++;
                b/=10;
            }
        }
        return c;
    }
};