class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
          if(nums[i+1]>nums[i]) {
            for(int x = nums[i] + 1; x < nums[i+1]; x++)
            ans.push_back(x);
        }
        }
        for(int x = 1; x < nums[0]; x++)
            ans.push_back(x);

for (int x = nums[nums.size() - 1] + 1; x <= nums.size(); x++) {
            ans.push_back(x);
        }
        return ans;
    }
};

