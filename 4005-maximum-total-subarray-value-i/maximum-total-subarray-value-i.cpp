class Solution {
public:
    long long maxTotalValue(vector<int>& nums, long long k) {
       long long m=*max_element(nums.begin(),nums.end());
       long long n=*min_element(nums.begin(),nums.end());
       long long c=k*abs(m-n);
       return c;
    }
};