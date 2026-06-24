class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int m=arrays[0][0];
        int n=arrays[0].back();
        int ans=0;
        for(int i=1;i<arrays.size();i++){
            
                ans = max(ans,
                      max(abs(arrays[i].back() - m),
                          abs(n - arrays[i][0])));
                m = min(m, arrays[i][0]);
            n = max(n, arrays[i].back());
            
        }
        return ans;
    }
};