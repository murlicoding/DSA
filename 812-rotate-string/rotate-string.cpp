class Solution {
public:
string rotate(string s){
            int i=0;
            int n=s.size();
            while(i<n-1){
                swap(s[i],s[i+1]);
                i++;
            }
            return s;
        }
    bool rotateString(string s, string goal) {
        if(s==goal) return true;
        for(int i = 0; i < s.size(); i++){
            s = rotate(s);
            if(s == goal) return true;
        }
        return false;
    }
};