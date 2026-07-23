class Solution {
public:
   int add(int a,int b){
    int c=0;
    while(a>0){
     if(a%10==b) c++;
     a/=10;
    }
    return c;
   }
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans+=add(nums[i],digit);
        }
        return ans;
    }
};