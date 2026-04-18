class Solution {
public:
    int mirrorDistance(int n) {
        int org=n;
        int m=0;
        while(n>0){
          int i =n%10;
          n=n/10;
          m=m*10+i;
        }
        return abs(org-m);
    }
};