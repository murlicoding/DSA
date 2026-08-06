class Solution {
public:
    int smallestNumber(int n, int t) {
        while(true){
        int m=1;
        int b=n;
        while(b>0){
         int a=b%10;
         m*=a;
         b/=10;
        }
        if(m%t==0) return n;
         n++;
        }
        return 0;
    }
};