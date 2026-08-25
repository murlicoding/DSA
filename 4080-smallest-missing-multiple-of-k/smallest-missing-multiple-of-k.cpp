class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % k == 0)
                ans.push_back(nums[i]);
        }

        int expected = k;

        for (int i = 0; i < ans.size(); i++) {
            if (ans[i] == expected)
                expected += k;
        }

        return expected;
    }
};