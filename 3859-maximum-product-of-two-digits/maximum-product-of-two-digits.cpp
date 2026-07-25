class Solution {
public:
    int maxProduct(int n) {
        string t=to_string(n);
        int ans=0;
        for(int i=0;i<t.size();i++){
            for(int j=i+1;j<t.size();j++){
                 ans=max(ans,(t[i]-'0')*(t[j]-'0'));
            }
        }
        return ans;
    }
};