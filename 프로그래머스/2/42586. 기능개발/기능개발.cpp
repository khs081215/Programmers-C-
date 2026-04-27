#include <string>
#include <vector>
#include <stack>

using namespace std;
// 7,3,9
// 5,10,1,1,20,1 


vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int maxday;
    int cnt=1;
    int buffer;
    
    for(int i=0;i<progresses.size();i++)
    {
        
        if((100-progresses[i])%speeds[i]==0) buffer=(100-progresses[i])/speeds[i];
        else buffer=(100-progresses[i])/speeds[i]+1;
        if(i==0) 
        {
            maxday=buffer;
            continue;
        }
        if(maxday<buffer) 
        {
            answer.push_back(cnt);
            maxday=buffer;
            cnt=1;
        }
        else cnt++;
    }
    answer.push_back(cnt);
    
    
    
    
    
    return answer;
}