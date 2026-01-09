#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 45;
    int i;
    for(i=0;i<numbers.size();i++)
    {
        answer-=numbers[i];
    }
    
    return answer;
}