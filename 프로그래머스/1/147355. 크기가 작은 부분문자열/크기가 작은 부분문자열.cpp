#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    for(int i=0;i<t.length()-p.length()+1;i++)
    {
        bool issmaller=true;
        for(int j=0;j<p.length();j++)
        {
            if(t[i+j]<p[j]) break;
            else if(t[i+j]>p[j])
            {
                issmaller=false;
                break;
            }
        }
        if(issmaller)answer++;
    }
    
    
    return answer;
}