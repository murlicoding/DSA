class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char>mp;
        char ch='a';
        for(auto c:key){
            if(c!=' ' && mp.find(c)==mp.end()){
                mp[c]=ch;
                ch++;
            }
        }
        
        string ans="";
        for(auto x:message){
            if(x==' ') ans+=' ';
            else ans+=mp[x];
        }
        return ans;
    }
};