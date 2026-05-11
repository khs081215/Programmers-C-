#include <string>
#include <vector>

using namespace std;

vector<long long> solution(vector<long long> numbers) {
    vector<long long> answer;
    for(int i=0;i<numbers.size();i++)
    {
        bool bisdiv=false;
        long long cnt=1;
        long long num=numbers[i];
        
        while(numbers[i]>0)
        {
            if(numbers[i]%2==0)
            {
                if(cnt!=1)
                {
                    answer.push_back(num+(cnt/2));
                }
                else answer.push_back(num+cnt);
                bisdiv=true;
                break;
            }
            numbers[i]/=2;
            cnt*=2;
        }
        if(num==0) answer.push_back(1);
        else if(!bisdiv)
        {
            answer.push_back(num+(cnt/2));
        }

    }
    
    
    
    return answer;
}