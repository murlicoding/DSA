class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        unordered_map<char,int>mp;
        stable_sort(words.begin(), words.end(), [](string a, string b) {
        return a.length() < b.length();
    });
        for(auto x:licensePlate){
            if(isalpha(x))mp[tolower(x)]++;
        }
        
        for(string word:words){
            unordered_map<char,int>sp;
            for (char x : word) {
                sp[x]++;
            }
           bool valid = true;
            for (auto y : mp) {
                if (sp[y.first] < y.second) {
                    valid = false;
                    break;
                }
            }

            if (valid) {
                return word;
            }
        }

        return "";
    }
};