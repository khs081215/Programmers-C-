#include <string>
#include <vector>

using namespace std;
int memo[100000];

int fib(int n)
{
    if(memo[n]!=0) return memo[n];
    if(memo[n-1]!=0&&memo[n-2]!=0)
    {
        memo[n]=(memo[n-2]+memo[n-1])%1234567;
        return memo[n];
    }
    return (fib(n-1)+fib(n-2))%1234567;
}


int solution(int n) {
    int answer = 0;
    memo[0]=0;
    memo[1]=1;
    memo[2]=1;
    
    
    answer=fib(n);
    return answer;
}