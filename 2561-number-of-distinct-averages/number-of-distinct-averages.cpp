class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<double>s;
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            
            double c=(nums[i]+nums[j])/2.0;
            s.insert(c);
            i++;
            j--;
        }
        return s.size();
    }
};