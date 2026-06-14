class Solution {
public:
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
    
}
    int minimumSwaps(vector<int>& nums) {
        int i=0,j=nums.size()-1,c=0;
        while(i<=j){
            if (nums[i] != 0) {
                i++;
            }
            else if (nums[j] == 0) {
                j--;
            }
            else{swap(nums[i],nums[j]);
                c++;
                i++;
                j--;
            }
        }
        return c;
    }
};