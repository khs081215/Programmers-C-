#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    long long buffer=n;
    while(1)
    {
        answer.push_back(buffer%10);
        if(buffer/10==0) break;
        buffer/=10;
    }
    
    return answer;
}