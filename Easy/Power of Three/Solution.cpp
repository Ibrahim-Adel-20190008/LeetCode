class Solution {
public:
    bool isPowerOfThree(int n) {
       return n>0 && pow(3,float(log(n)/log(3)))==n;
// another sol        return n>0 && 1162261467 %n == 0;
    }
};