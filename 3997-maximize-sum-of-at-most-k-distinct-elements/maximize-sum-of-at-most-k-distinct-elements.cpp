class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        sort(nums.rbegin(),nums.rend());
        vector<int> ans;
        set<int>st;
        vector<int>a;
        for(auto x:nums){
            st.insert(x);
        }
        for(auto x:st)a.push_back(x);
                sort(a.rbegin(),a.rend());

        for(int i=0;i<k && i<a.size();i++){ans.push_back(a[i]);}
        return ans;
    }
};