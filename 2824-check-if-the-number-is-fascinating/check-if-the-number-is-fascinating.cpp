class Solution {
public:
    bool isFascinating(int n) {
      
        int a=n*2;
        int b=n*3;
        string s=to_string(n)+to_string(a)+to_string(b);
       if (s.size() != 9)
            return false;

        unordered_map<char, int> mp;

        for (char x : s) {
            if (x == '0')
                return false;
            mp[x]++;
        }
        for(auto x:mp){
            if(x.second!=1) return false;
        }
        return true;
    }
};