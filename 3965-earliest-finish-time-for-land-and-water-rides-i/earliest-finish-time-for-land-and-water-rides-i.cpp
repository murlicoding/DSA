class Solution {
public:
    int earliestFinishTime(vector<int>& a, vector<int>& b, vector<int>& c, vector<int>& d) {
        int lmin=INT_MAX;
        int wmin=INT_MAX;
        for(int i=0;i<a.size();i++){
            lmin=min(lmin,a[i]+b[i]);
        }
        for(int i=0;i<c.size();i++){
            wmin=min(wmin,c[i]+d[i]);
        }
        int ans=INT_MAX;
        for(int i=0;i<c.size();i++){
            ans=min(ans,max(lmin,c[i])+d[i]);
        }
        for(int i=0;i<a.size();i++){
            ans=min(ans,max(wmin,a[i])+b[i]);
        }
        return ans;
    }
};