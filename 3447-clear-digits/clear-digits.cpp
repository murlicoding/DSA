class Solution {
public:
    string clearDigits(string s) {
      
        string t="";
         for (int i = 0; i < s.size(); i++) {
            if (isdigit(s[i])) {
                if (!t.empty()) {
                    t.pop_back();
                }
            }
            else {
                t.push_back(s[i]);
            }
        }

        return t;
    }
};