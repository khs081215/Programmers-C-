#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> scorelist;
    for(int i=0;i<score.size();i++)
    {
        scorelist.push_back(score[i]);
        sort(scorelist.begin(),scorelist.end());
        if(i<k)
        {
            answer.push_back(scorelist[0]);
        }
        else
        {
            answer.push_back(scorelist[i-k+1]);
        }
    }
    
    return answer;
}