#include <string>
#include <unordered_map>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    int i,j;
    unordered_map<int, int> amap;
    while(n>0)
    {
        amap[n%10]++;
        n/=10;
    }
    for(i=9;i>=0;i--)
    {
        for(j=amap[i];j>0;j--)
        {
            answer*=10;
            answer+=i;
        }
    }
    
    return answer;
}