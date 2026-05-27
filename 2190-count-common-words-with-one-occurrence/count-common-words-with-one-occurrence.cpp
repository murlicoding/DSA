class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int c=0;
        for(int i=0;i<words1.size();i++){
            int c1=0,c2=0;
            for(int j=0;j<words1.size();j++){
                if(words1[i]==words1[j]) c1++;
            }
            for(int j=0;j<words2.size();j++){
                if(words1[i]==words2[j]) c2++;
            }
            if(c1==1 && c2==1) c++;
        }
        return c;
    }
};