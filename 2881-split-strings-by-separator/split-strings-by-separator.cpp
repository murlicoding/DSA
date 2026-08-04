class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector <string>ans;
        for(auto x:words){
        stringstream ss (x);
        string word;
        while (getline(ss, word, separator)){
            if(!word.empty())
              ans.push_back(word);
        }}
        return ans;
    }
};