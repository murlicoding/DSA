class Solution {
public:
    vector<int> fairCandySwap(vector<int>& arr, vector<int>& b) {
        int sum = accumulate(arr.begin(), arr.end(), 0);
        int sum1 = accumulate(b.begin(), b.end(), 0);
        int diff = (sum - sum1) / 2;

        unordered_set<int> st(b.begin(), b.end());

        for (int x : arr) {
            int y = x - diff;

            if (st.count(y))
                return {x, y};
        }

        return {};
           
    }
};