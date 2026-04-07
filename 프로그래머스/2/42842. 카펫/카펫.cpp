#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    
    for(int i=3;i<brown+yellow;i++)
    {
        if((brown+yellow)%i==0)
        {
            int div=(brown+yellow)/i;
            if(brown==(i+div)*2-4)
             {
                 answer.push_back(div);
                 answer.push_back(i);
                 break;
             }
        }
    }
    
    return answer;
}