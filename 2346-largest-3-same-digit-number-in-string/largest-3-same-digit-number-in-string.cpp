class Solution {
public:
    string largestGoodInteger(string num) {
        char ans='0';
        string t="";
        for(int i=0;i+2<num.size();i++){
          if(num[i]==num[i+1] && num[i+1]==num[i+2]) {
          if(num[i]>=ans){
              ans=num[i];
              t = num.substr(i, 3);
               
          }
          }
        }
        return t;
    }
};