#include <string>
#include <vector>

using namespace std;

int weaponpower(int number,int limit,int power)
{
    int cnt=2;
    if(number==1) cnt=1;
    for(int i=2;i<number/2+1;i++)
    {
        if(number%i==0) cnt++;
        if(cnt>limit) return power;
    }
    if(cnt>limit) return power;
    return cnt;
}

int solution(int number, int limit, int power) {
    int answer = 0;
    for(int i=1;i<=number;i++)
    {
        answer+=weaponpower(i,limit,power);
    }
    
    return answer;
}