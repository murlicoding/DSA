class Solution {
public:
    int minimumSum(vector<int>& nums) {
        bool t=false;
        int s=INT_MAX;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
            for(int k=j+1;k<nums.size();k++){
            if(i<j && j<k && nums[i]<nums[j] && nums[k]<nums[j]){
            s=min(s,nums[i]+nums[j]+nums[k]); 
            t=true;
            }
        }
        }
        }
        if(t)
        return s;
        return -1;
    }
};