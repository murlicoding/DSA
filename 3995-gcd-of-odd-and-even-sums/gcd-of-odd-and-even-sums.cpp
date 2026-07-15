class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumo=0;
        int sume=0; 
        for(int i=1;i<2*n;i+=2) sumo+=i;
        for(int i=0;i<2*n;i+=2) sume+=i;
        int m=gcd(sumo,sume);
        return m;
    }
};