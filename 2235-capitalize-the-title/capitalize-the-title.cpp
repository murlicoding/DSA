class Solution {
public:
    string capitalizeTitle(string title) {
        stringstream ss(title);
        string word,ans;
        while(ss>>word){
            if(word.size()<=2){
                for(int i=0;i<2;i++){
                    word[i]=tolower(word[i]);
                }
            }
            else{ word[0]=toupper(word[0]);
            for(int i=1;i<word.size();i++){
               
                word[i]=tolower(word[i]);
            }}
            if(!ans.empty())
               ans+=" ";
               ans+=word;
        }
        return ans;
    }
};