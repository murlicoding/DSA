class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n=0,m=0,p=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='L' ) m++;
            if(moves[i]=='R'  ) n++;
            if(moves[i]=='_') p++;
        }
        return abs(n-m)+p;
    }
};