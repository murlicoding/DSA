class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.size()<26) return false;
        unordered_map<char,int>mp;
        for(auto x:sentence) mp[x]++;
        if(mp.size()<26) return false;
        return true;
    }
};