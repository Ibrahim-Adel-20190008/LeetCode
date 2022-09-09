class Solution {
public:

void addToInt(int &number, int digit)
{
    number = (number*10) + digit;
}
void solve(int n,int k,set<int> &result,int temp, int digit){
    addToInt(temp,digit);
    if(n == 0)
    {
        result.insert(temp);
        return;
    }
    if(digit+k<10){
        solve(n-1,k,result,temp,digit+k);
    }
    if(digit-k>-1){
        solve(n-1,k,result,temp,digit-k);
    }
}
vector<int> numsSameConsecDiff(int n, int k) {
    set<int> result;
    for(int i=1;i<10;i++)
    {
        solve(n-1,k,result,0,i);
    }
    return vector<int>{result.begin(),result.end()};
}
};