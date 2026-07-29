class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        unordered_map<char,int>m,p;
        for(auto x:word1){m[x]++;}
        for(auto x:word2){p[x]++;}
        for(int i='a';i<='z';i++){
            if(abs(m[i]-p[i])>3) return false;
            
        }
        return true;
    }
};