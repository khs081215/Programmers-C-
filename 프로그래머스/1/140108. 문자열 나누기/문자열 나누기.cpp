#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int firstwordcnt=0;
    int notfirstcnt=0;
    char firstword='0';
    int lastcut=-1;
    
    for(int i=0;i<s.length();i++)
    {
        if(firstword=='0')
        {
            firstword=s[i];
        }
        if(firstword==s[i])firstwordcnt++;
        else notfirstcnt++;
        if(firstwordcnt==notfirstcnt)
        {
            answer++;
            firstwordcnt=0;
            notfirstcnt=0;
            firstword='0';
            lastcut=i;
        }
    }
    
    if(lastcut!=s.length()-1)
    {
        answer++;
    }
    
    return answer;
}