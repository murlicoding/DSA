class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int c=0;
        for(int i=0;i<words.size();i++){
            for(int j=i+1;j<words.size();j++){
                string s=words[j];
                reverse(s.begin(),s.end());
                if(words[i]==s)c++;
            }
        }
        return c;
    }
};