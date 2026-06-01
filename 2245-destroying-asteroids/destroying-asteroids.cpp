class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        int c=0;
        long long b=mass;
        for(auto x:asteroids){
            if(b<x)
            return false;
                b+=x;
              
            
        }
        return true;
    }
};