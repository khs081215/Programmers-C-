#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    long longnum=num;
    int i;
    if(longnum==1) return 0;
    for(i=0;i<500;i++)
    {
        if(longnum==1) break;
        if(longnum%2==0) longnum/=2;
        else longnum=longnum*3+1;
    }
    if(i==500&&longnum!=1) return -1;
    return i;
}