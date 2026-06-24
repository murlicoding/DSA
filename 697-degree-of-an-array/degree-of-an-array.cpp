class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(auto x : nums)
            mp[x]++;

        int m = 0;
        for(auto x : mp)
            m = max(m, x.second);

        int ans = nums.size();

        for(auto x : mp) {
            if(x.second == m) {

                int element = x.first;

                int l = 0;
                int r = nums.size() - 1;

                while(nums[l] != element) l++;
                while(nums[r] != element) r--;

                ans = min(ans, r - l + 1);
            }
        }

        return ans;
    }
};          

               
