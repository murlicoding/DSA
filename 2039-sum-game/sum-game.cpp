class Solution {
public:
    bool sumGame(string num) {
        int n=num.size();
int a=0,b=0,l=0,r=0;
        for(int i=0;i<n/2;i++){
            if(num[i]=='?')l++;
            else a+=num[i]-'0';

        }
        for(int i=n/2;i<n;i++){
            if(num[i]=='?')r++;
            else b+=num[i]-'0';
        }
        int e=a-b;
        int d=l-r;
        if(d%2!=0)
        return true;
        return e+(d/2)*9!=0;
    }
};