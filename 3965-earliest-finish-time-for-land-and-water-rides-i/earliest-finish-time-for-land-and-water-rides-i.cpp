class Solution {
public:
    int earliestFinishTime(
    vector<int>& a, 
    vector<int>& b, 
    vector<int>& c, 
    vector<int>& d) {
        int ans=INT_MAX;
        for(int i=0;i<a.size();i++){
            for(int j=0;j<c.size();j++){
                 int finish1=max(a[i]+b[i],c[j])+d[j];
                 int finish2=max(c[j]+d[j],a[i])+b[i];
                 ans=min(ans,min(finish1,finish2));
                }
            }
    return ans;
    }
};