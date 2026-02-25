#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    int cnt=0;
    sort(score.begin(),score.end());
    
    for(int i=score.size()-1;i>=0;i--)
    {
        cnt++;
        if(cnt==m)
        {
            answer+=m*score[i];
            cnt=0;
        }
    }
    
    return answer;
}