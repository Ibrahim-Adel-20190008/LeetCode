class Solution {
public:
    bool isPowerOfFour(int n) {
        return n>0 && pow(4,int(log(n)/log(4)))==n;
    }
};