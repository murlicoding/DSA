class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int total=0;
        int j=n,res=n+1,sum=0;
        for(auto c:nums)total+=c;
        int target=total-x;
        if(target<0)return -1;
        int i=0;
        
        int len =-1;
        for(int j=0;j<n;j++){
            sum+=nums[j];
            while(sum>target){
                sum-=nums[i];
                i++;}
                if(sum==target)
                len=max(len,j-i+1);
            }
            if(len==-1)return -1;
            return n-len;
        
    }
};