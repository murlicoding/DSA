class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int a=player1[0],b=player2[0];
        for(int i=1;i<player1.size();i++){
             if(player1[i-1] >=10 || (i>=2 && player1[i-2]==10) )a+=2*player1[i];
             else a+=player1[i];
             }
        
        for(int i=1;i<player2.size();i++){
             if(player2[i-1] >=10 || (i>=2 && player2[i-2]==10) )b+=2*player2[i];
             else b+=player2[i];
             }
        
        if(a>b)return 1;
        else if(b>a) return 2;
        else return 0;
    }
};