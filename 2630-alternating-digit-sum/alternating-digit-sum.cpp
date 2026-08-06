class Solution {
public:
    int alternateDigitSum(int n) {
        int sum=0;
        vector<int>ans;
        while(n>0){
            ans.push_back(n%10);
            n/=10;
        }
        reverse(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
              if (i % 2 == 0)
                sum += ans[i];
            else
                sum -= ans[i];
        }
        return sum;
    }
};