class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int s=nums[0],k=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]-1==nums[i])s+=nums[i+1];
            else {k=i+1;break;}
        }
        while(true){
            bool f=false;
        for(int j=0;j<nums.size();j++){
                if(nums[j]==s){f=true;break;}
        }if(!f)return s;
        s++;}
    }
};