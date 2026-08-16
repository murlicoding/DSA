class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
       int a[3] = {};

        for (int x : stones)
            a[x % 3]++;

        if (a[1] == 0 && a[2] == 0)
            return false;

        if (a[0] % 2 == 0)
            return a[1] && a[2];

        return abs(a[1] - a[2]) > 2;
    }
};