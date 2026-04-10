#include <string>
#include <vector>

using namespace std;

//nCa   n!/a!/(n-a)!

long long memo[2001]={0,};

long long phivo(int n)
{
    if(memo[n]!=0) return memo[n];
    if(n==1||n==0) 
    {
        memo[0]=1;
        memo[1]=1;
        return 1;
    }
    long long buffer=phivo(n-1)+phivo(n-2);
    if(buffer>1234567) buffer%=1234567;
    memo[n]=buffer;
    return buffer;
}


long long solution(int n) {
    long long answer = 0;
    
    
    answer=phivo(n);
    
    
    
    return answer;
}