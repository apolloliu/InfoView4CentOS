// 概念题
class Solution {
public:
    int numberOfMatches(int n) {
        int res = 0;
        while(n > 1)res += n/2, n = (n+1)/2;
        return res;
    }
};
