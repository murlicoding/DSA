class Solution {
public:
   bool game(vector<int>&arr,int i){
    if(i<0 || i>=arr.size()|| arr[i]<0 ) 
    return false;

    if(arr[i]==0) return true;
    int jump=arr[i];
    arr[i]=-arr[i];
    return game(arr,i+jump) || game(arr,i-jump);
   }
    bool canReach(vector<int>& arr, int start) {
        return game(arr,start);
    }
};