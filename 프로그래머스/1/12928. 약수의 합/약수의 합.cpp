#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int div=n;
    while(div>0){
        if(n%div==0)answer+=div;
        div--;
    }
    return answer;
}