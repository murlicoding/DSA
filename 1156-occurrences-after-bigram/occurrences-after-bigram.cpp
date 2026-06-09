class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        stringstream ss(text);
        string a,b,c;
        vector<string>ans;
        ss>>a>>b;

    while (ss >>c) {
        if(a==first && b==second)
        ans.push_back(c);
    
    a=b;
    b=c;
    }
    return ans;
    }
};