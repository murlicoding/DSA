class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size(), m = needle.size();
        if (m == 0) return 0;
        if (n < m) return -1;
        
        int i = 0, j = 0;
        while (i <= n - m && j < m) {
            if (haystack[i + j] == needle[j]) {
                j++;
                if (j == m) return i;
            } else {
                i+=1;
                j = 0;
            }
        }
        return -1;
    }
};

