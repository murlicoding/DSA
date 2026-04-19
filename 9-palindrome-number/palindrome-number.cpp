class Solution {
public:
    bool isPalindrome(int x) {
        long int a = 0 ;
        long int o = x ;
        while(x>0){
        long int n = x % 10 ;
        x = x/10 ;
        a = a * 10 + n ;
        }
        if(a == o){
        return 1 ;
        }
    
    return 0 ;
    }
};
