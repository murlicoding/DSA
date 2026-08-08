class Solution {
public:
int summ(int x){
    int s=0;
    int y;
    while(x>0){
   y=x%10;
   if(y>=s) s=y;
   x/=10;
    }
    return s;
}
    int maxSum(vector<int>& nums) {
        int sum=-1;
        vector<int>ans;
        for(auto x:nums){
            int a=summ(x);
                 ans.push_back(a);
            }
        
        for (int i = 0; i < ans.size(); i++) {
            for (int j = i + 1; j < ans.size(); j++) {
                if (ans[i] == ans[j]) {
                    sum = max(sum, nums[i] + nums[j]);
                }

            }
        }
        return sum;

    }
};