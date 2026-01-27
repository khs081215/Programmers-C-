#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    int threepow[100]={0,};
    int cnt=0;
    int buff;
    while(n>0)
    {
        threepow[cnt]=n%3;
        n/=3;
        cnt++;
    }
    for(int i=cnt-1;i>=0;i--)
    {
        buff=pow(3,(cnt-1-i));
        answer+=buff*threepow[i];
    }
    
    
    
    return answer;
}