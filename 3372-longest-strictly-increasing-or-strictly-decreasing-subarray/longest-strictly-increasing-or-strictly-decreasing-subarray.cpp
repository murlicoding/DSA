class Solution {
public:
    int longestMonotonicSubarray(vector<int>& a) {
        int inc = 1, dec = 1, ans = 1;
int n=a.size();
for(int i = 1; i < n; i++) {
    if(a[i] > a[i-1])
        inc++;
    else
        inc = 1;

    if(a[i] < a[i-1])
        dec++;
    else
        dec = 1;

    ans = max(ans, max(inc, dec));
}


return ans;
    }
};