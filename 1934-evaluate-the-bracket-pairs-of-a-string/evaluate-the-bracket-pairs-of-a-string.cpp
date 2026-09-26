class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string>mp;
        for(auto x:knowledge){
            mp[x[0]]=x[1];
        }
        string ans="",temp="";
        bool inside=false;
        for(auto c:s){
            if(c=='('){
                inside=true;
                temp="";
            }
            else if(c==')'){
                inside =false;
                if(mp.find(temp)!=mp.end())
                 ans+=mp[temp];
                 else ans+="?";
                temp="";
            }
            else if(inside)temp+=c;
            else ans+=c;
        }
        return ans;
    }
};