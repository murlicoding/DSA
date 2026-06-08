class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>first;
        vector<int>second;
        vector<int>third;
        for(int a:nums){
            if(a<pivot) first.push_back(a);
            else if(a==pivot) second.push_back(a);
            else third.push_back(a);
        }
        for(int a:second){
            first.push_back(a);
        }
        for(int a:third){
            first.push_back(a);
        }
        return first;
    }
};