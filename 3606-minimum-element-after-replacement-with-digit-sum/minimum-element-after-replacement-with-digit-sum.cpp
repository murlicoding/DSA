class Solution {
public:
    int minElement(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int temp=nums[i];
            int sum=0;
            while(temp>0){
            int m=temp%10;
            sum+=m;
            temp=temp/10;
            }
            nums[i]=sum;
        }
        int m=*min_element(nums.begin(),nums.end());
        return m;
    }
};