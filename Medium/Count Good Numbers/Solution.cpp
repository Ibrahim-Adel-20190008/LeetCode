class Solution {
public:
const int mod = 1e9+7;
    long long power(long long a,long long b){
        long long res=1;
        a%=mod;
        while(b){
            if(b&1){
                res = res * a %mod;
            }
            a=a*a%mod;
            b>>=1;
        }
        return res%mod;
    }
    int countGoodNumbers(long long n) {
        long long five = (n+1)/2;
        long long four = n - five; 
        long long ans = power(5,five) * power(4,four) %mod;
        return ans;
    }
};