#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    int num=a;
    int pp=0;
    if(a>b) pp=-1;
    else pp=1;
    while(num!=b)
    {
        answer+=num;
        num+=pp;
    }
    answer+=b;
    return answer;
}