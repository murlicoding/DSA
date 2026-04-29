class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        for(auto &ch:paragraph){
            if(isalpha(ch)) ch=tolower(ch);
            else ch=' ';
        }
        unordered_set<string> ban(banned.begin(), banned.end());
        unordered_map<string,int>a;
        stringstream ss(paragraph);//words alag karta hai by space
        string word;
        while(ss >> word){
            if(ban.count(word)) continue;
            a[word]++;
        }
        string ans = "";
int maxFreq = 0;

for (auto &p : a) {
    if (p.second > maxFreq) {
        maxFreq = p.second;
        ans = p.first;
    }
}
return ans;
    }
};