class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int m;
        int sum=0;
        int z=x;
        while(x>0){
            m=x%10;
            x=x/10;
        sum+=m;
        }
        if(z%sum==0) return sum;
        return -1;
    }
};