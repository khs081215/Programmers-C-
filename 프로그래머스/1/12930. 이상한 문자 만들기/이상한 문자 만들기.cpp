#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int cnt=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ')
        {
            answer+=" ";
            cnt=0;
            continue;
        }
        if(cnt%2==0)
        {
            if(s[i]>'Z')
            {
                answer+=(s[i]-('a'-'A'));
            }
            else
            {
                answer+=s[i];
            }
        }
        else
        {
            if(s[i]<'a')
            {
                answer+=(s[i]+('a'-'A'));
            }
            else
            {
                answer+=s[i];
            }
        }
        cnt++;
    }
    return answer;
}