class Solution {
public:
    string removeTrailingZeros(string num) {
        int j=num.size()-1;
       
        while(j>0){
            if(num[j]!='0') break;
            j--;
        }
        return num.substr(0,j+1);
    }
};