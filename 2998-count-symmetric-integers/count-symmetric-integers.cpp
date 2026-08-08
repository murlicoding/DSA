class Solution {
public:
int check(int x){
    int c=0;
    string s=to_string(x);
    if(s.size()%2!=0) return 0;
    int i=0,a=0,b=0;
    int j=s.size()-1;
    while(i<j){
        a+=(s[i]-'0');
        b+=(s[j]-'0');
        i++;
        j--;
    }if(a==b)
     return 1;
     return 0;
}
    int countSymmetricIntegers(int low, int high) {
        int c=0;
        for(int i=low;i<=high;i++){
            if(check(i))c++;
        }
        return c;
    }
};