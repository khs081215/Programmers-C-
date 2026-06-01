#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> sequence, int k) {
    vector<int> answer;
    int front=0;
    int back=0;
    int sum=sequence[0];
    int length=sequence.size();
    
    while(1)
    {
        if(sum<k&&back==sequence.size()-1)
        {
            break;
        }
        if(sum>k&&front==back)
        {
            break;
        }
        
        
        if(sum<k)
        {
            sum+=sequence[++back];
        }
        else if(sum>k)
        {
            sum-=sequence[front++];
        }
        else
        {
            if(length>back-front)
            {
                if(!answer.empty())
                {
                    answer.pop_back();
                    answer.pop_back();
                }
                answer.push_back(front);
                answer.push_back(back);
                length=back-front;
            }
            
            if((back+1)<sequence.size())
            {
                sum+=sequence[++back];
                continue;
            }
            else
            {
                break;
            }
            
        }
    }
    
    
    
    return answer;
}