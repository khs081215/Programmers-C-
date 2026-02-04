#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='A'&&s[i]<='z')
        {
            int cbuff=(int)s[i]+n;
            if(cbuff>'z')
            {
                cbuff=cbuff-'z'+'a'-1;
            }
            if(s[i]<='Z'&&cbuff>'Z')
            {
                cbuff=cbuff-'Z'+'A'-1;
            }
            answer+=(char)cbuff;
        }
        else
        {
            answer+=' ';
        }
    }
    return answer;
}