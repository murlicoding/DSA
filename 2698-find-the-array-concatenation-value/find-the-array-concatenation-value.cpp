class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        long long ans=0;
        while(i<=j){
            if(i==j) {ans+=nums[i]; break;}
            else{
            int m = stoi(to_string(nums[i]) + to_string(nums[j]));
            i++;
            j--;
            ans+=m;
            }
        }
        return ans;
    }
};