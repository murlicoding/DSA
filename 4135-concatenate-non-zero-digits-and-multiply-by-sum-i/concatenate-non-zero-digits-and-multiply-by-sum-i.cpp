class Solution {
public:
    long long sumAndMultiply(int n) {
        long long num=0;
        long long sum=0;
        while(n>0){
            int r=n%10;
            if(r!=0){
            num=num*10+r;
            }
            sum+=r;
            n/=10;
        }
        long long num1=0;
        while(num>0){
            int m=num%10;
            num1=num1*10+m;
            num/=10;
        }
        long long c=num1*sum;
        return c;
    }
};