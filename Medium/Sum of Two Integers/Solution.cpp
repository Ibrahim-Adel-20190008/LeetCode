class Solution {
public:
int getSum(int a, int b) {
    int ans = 0, rem = 0;
    for (int i = 0; i < 10; i++) {
        int res = 0;
        if ( ((a>>i) & 1) == ((b>>i) & 1) ) {
            res |= rem;
            rem = (a>>i) & 1;
        } else {
            res = rem == 1 ? 0 : 1;
        }
        ans |= (res << i);
    }
    if(abs(min(a,b))>max(a,b)) return ((1<<10)-ans)*-1; // result will be negative
    else return ans;
}
};