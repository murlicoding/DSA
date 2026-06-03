class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int>ans;
        while(n){
            ans.push_back(n%10);
            n=n/10;
        }
        long long c=10;
        for(int i=1;i<ans.size();i++){
          ans[i]=c*ans[i];
          c*=10;
        }
        reverse(ans.begin(),ans.end());
        ans.erase(remove(ans.begin(), ans.end(), 0), ans.end());
        return ans;
    }
};