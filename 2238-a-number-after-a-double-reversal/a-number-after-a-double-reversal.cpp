class Solution {
public:
    bool isSameAfterReversals(int num) {
        int temp=num;
        int digit=0;
        
        while(temp){
        int r=temp%10;
        digit=digit*10 + r;
        temp/=10;
        }
        temp=digit;
        int digit1=0;
        while(temp){
        int r=temp%10;
        digit1=digit1*10 + r;
        temp/=10;
        }
        return(digit1==num);

    }
};