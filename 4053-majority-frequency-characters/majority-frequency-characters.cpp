class Solution {
public:
    string majorityFrequencyGroup(string s) {
        map<char, int> mp;
        map<int, string> fre;

        for (char c : s)
            mp[c]++;

        for (auto x : mp)
            fre[x.second] += x.first;

        string ans = "";
        int mx = 0, best = 0;

        for (auto x : fre) {
            if (x.second.size() >= mx && x.first >= best) {
                mx = x.second.size();
                best = x.first;
                ans = x.second;
            }
        }

        return ans;
    }
};