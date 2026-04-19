class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
       int n=0,j=0,i=0;
       while(i<nums1.size() && j<nums2.size()){
        if(nums1[i]<=nums2[j]){
            n=max(n,j-i);
            j++;
        }
        else i++;
       } 
       return n;
    }
};