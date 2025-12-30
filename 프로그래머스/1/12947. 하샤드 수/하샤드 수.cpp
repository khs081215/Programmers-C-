#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int num=x;
    int div=0;
    while(x>0)
    {
        div+=x%10;
        x/=10;
    }
    return num%div==0;
}