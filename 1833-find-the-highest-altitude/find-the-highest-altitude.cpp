class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int m=0,c=0;
        int n=gain.size();
        for(int i=0;i<n;i++){
            c+=gain[i];
            if(c>m) m=c;
        }
        return m;
    }
};