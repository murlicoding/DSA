class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_map<int,int>mp1,mp2,mp3;
        vector<int>ans;
        for(auto x:nums1)mp1[x]++;
        for(auto x:nums2)mp2[x]++;
        for(auto x:nums3)mp3[x]++;
        set<int>s;
        for(auto x:mp1)s.insert(x.first);
        for(auto x:mp2)s.insert(x.first);
        for(auto x:mp3)s.insert(x.first);
        for(auto x:s){
            int c=mp1.count(x)+mp2.count(x)+mp3.count(x);
            if(c>=2)ans.push_back(x);
        }
        return ans;
    }
};