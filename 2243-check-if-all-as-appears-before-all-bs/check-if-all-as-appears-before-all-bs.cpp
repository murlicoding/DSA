class Solution {
public:
    bool checkString(string s) {
        string t="",z="";
        int i=0;
        while(i<s.size()){
            if(s[i]=='b') {z=s.substr(i);break;}
            else t+='a';
            i++;
        }
        unordered_map<char,int>mp;
        for(auto x:z){
           mp[x]++;
        }
        for(auto x:mp){
            if(x.first=='a') return false;
        }
        return true;
    }
    
};