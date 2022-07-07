class Solution {
public:
    int fib(int n) {
        int current=0,next=1;
        for(int i = 1;i<=n;i++)
        {
            int tmp = current+next;
            current = next;
            next = tmp;
        }
        return current;
    }
};