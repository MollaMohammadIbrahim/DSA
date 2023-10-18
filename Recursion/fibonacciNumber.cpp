class Solution {
public:
    unordered_map<int, long long int> memo;
    
public:
    
    int fib(int n) {
        if(n==0)return 0;
        if(n==1)return 1;
        if(memo.find(n)!=memo.end()){
            return memo[n];
        }
        long long res = fib(n-1)+fib(n-2);
        memo[n]=res;
        return memo[n];
        //return fib(n-1) + fib(n-2);
    }
};