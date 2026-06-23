class Solution {
public:
    int hIndex(vector<int>& a) {
        sort(a.rbegin(),a.rend());
        int h=0;
        for(int i=0;i<a.size();i++){
            if(a[i]>=i+1)
            h=i+1;
            else break;
        }
        return h;
    }
};