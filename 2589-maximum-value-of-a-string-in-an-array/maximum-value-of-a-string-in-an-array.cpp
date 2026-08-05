class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int ans=0;
        for(auto x:strs){
            bool d=true;
            for(auto p:x){
            if( ! isdigit(p)) {d=false;break;}
            }
            if(! d) ans=max(ans,(int)x.size());
            
            else ans=max(ans,stoi(x));
        }
    return ans;
    }
};