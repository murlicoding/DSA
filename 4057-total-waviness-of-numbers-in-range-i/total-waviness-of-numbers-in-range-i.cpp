class Solution {
public:
int w=0;
int  ans(int n){
    int w=0;
std::string s = std::to_string(n);
int i=0;int j=1;int k=2;
for(int i=0, j=1, k=2;k<s.size();i++,k++,j++)
{
 if((s[j]>s[i] && s[j]>s[k]) ||
    (s[j]<s[i] && s[j]<s[k] ))
  w++;
}
return w;
}
int total=0;
    int totalWaviness(int num1, int num2) {
        for(int i=num1;i<=num2;i++){
            total+=ans(i);
        }
        return total;
    }
};