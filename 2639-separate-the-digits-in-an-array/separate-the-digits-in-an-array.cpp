class Solution {
public:
void rev(int x,vector<int>& final){
    vector<int> temp;
            while(x>0){
                int m=x%10;
                temp.push_back(m);
                x=x/10;
            }
            for(int d:temp){
                final.push_back(d);
            }
        }
    vector<int> separateDigits(vector<int>& nums) {
        
        vector<int>final;
        for(int i=nums.size()-1;i>=0;i--){
            rev(nums[i],final);
        }
        reverse(final.begin(),final.end());
        return final;
    }
};