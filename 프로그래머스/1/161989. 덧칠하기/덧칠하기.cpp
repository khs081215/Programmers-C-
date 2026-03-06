#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int cnt=section[0];
    int sectionlocation=0;
    while(true)
    {
        if(cnt>section[section.size()-1])
        {
            break;
        }
        cnt+=m;
        for(int i=sectionlocation;i<section.size();i++)
        {
            if(cnt<=section[i])
            {
                cnt=section[i];
                break;
            }
        }
        
        
        answer++;
    }
    
    return answer;
}