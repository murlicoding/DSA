class Solution {
public:
    string toGoatLatin(string sentence) {
        stringstream ss(sentence);
        string word,d;
        int c=1;
        while(ss>>word){
          string t;
                if(string("aeiouAEIOU").find(word[0])!=string::npos){
                  
                    t=word;}
                    else {
                    t+=word.substr(1);
                    t+=word[0];}
                    t+="ma";
                    t+=string(c,'a');
                    
                
                if(!d.empty()) d+=" ";
                d+=t;
                c++;
            
    }
    return d;
    }
};