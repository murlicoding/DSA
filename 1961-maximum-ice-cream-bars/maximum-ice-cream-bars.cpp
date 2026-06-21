class Solution {
public:
    int maxIceCream(vector<int>& a, int b) {
         sort(a.begin(),a.end());
         int c=0;
         for(auto x:a){
            if(b>=x){
                b-=x;
                c++;
            }
            else break;
         }
         return c;
    }
};