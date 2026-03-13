#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    int cloth[31]={0,};
    
    for(int i=0;i<lost.size();i++)
    {
        cloth[lost[i]]=-1;
    }
    for(int i=0;i<reserve.size();i++)
    {
        cloth[reserve[i]]++;
    }
    
    for(int i=1;i<=n;i++)
    {
        if(cloth[i]==-1)
        {
            if(cloth[i-1]==1)
            {
                answer++;
            }
            else if(i!=n&&cloth[i+1]==1)
            {
                cloth[i+1]=0;
                answer++;
            }
        }
        else
        {
            answer++;
        }
    }
    
    
    return answer;
}