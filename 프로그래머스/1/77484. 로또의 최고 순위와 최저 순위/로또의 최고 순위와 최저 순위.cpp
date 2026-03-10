#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int zerocnt=0;
    int samecnt=0;
    for(int i=0;i<lottos.size();i++)
    {
        for(int j=0;j<win_nums.size();j++)
        {
            if(lottos[i]==0)
            {
                zerocnt++;
                break;
            }
            if(lottos[i]==win_nums[j])
            {
                samecnt++;
                break;
            }
        }
    }
    
    if((samecnt+zerocnt)<2)answer.push_back(6);
    else answer.push_back(7-samecnt-zerocnt);
    
    if(samecnt<2)answer.push_back(6);
    else answer.push_back(7-samecnt);
    
    return answer;
}