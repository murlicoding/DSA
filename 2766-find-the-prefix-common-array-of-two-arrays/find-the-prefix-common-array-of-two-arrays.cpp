class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> C(A.size());
        for(int x=0;x<A.size();x++){
        int c=0;

        for(int i=0;i<=x;i++){
            for(int j=0;j<=x;j++){
           
                if(A[i]==B[j]){c++;
                break;}
                
            }
        }
        C[x]=c;
    }
    return C;
    }
};