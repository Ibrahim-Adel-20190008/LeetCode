class Solution {
public:
    int tribonacci(int n) {
        vector<long long> tribonacci;
        tribonacci.push_back(0);
        tribonacci.push_back(1);
        tribonacci.push_back(1);
        for(int i=0;i<39;i++)
        {
            long long newNumber = tribonacci[i] + tribonacci[i+1] + tribonacci[i+2];
            tribonacci.push_back(newNumber);
        }
        return tribonacci[n];
    }
};