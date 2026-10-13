class Solution {
public:
    int totalFruit(vector<int>& a) {
       unordered_map<int,int>mp;
        int i=0,res=0;

        for(int j=0;j<a.size();j++){
            mp[a[j]]++;

            while(mp.size()>2){
                mp[a[i]]--;
                if(mp[a[i]]==0)
                    mp.erase(a[i]);
                i++;
            }

            
                int len=j-i+1;
                res=max(res,len);
            
        }

        return res;
    }
};