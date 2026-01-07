#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    long long answer=0;
    int i;
    for(i=0;i<absolutes.size();i++)
    {
        if(signs[i])
        {
            answer+=absolutes[i];
        }
        else
        {
            answer-=absolutes[i];
        }
    }
    
    
    return answer;
}