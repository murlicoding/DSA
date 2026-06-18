class Solution {
public:
    double angleClock(int hour, int minutes) {
        double r=abs((30*hour+0.5*minutes)-6.0*minutes);
        r = min(r, 360 - r);
        return r;
    }
};