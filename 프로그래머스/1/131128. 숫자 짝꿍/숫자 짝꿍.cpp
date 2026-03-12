#include <string>
#include <vector>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    int firstnum[10]={0,};
    int secondnum[10]={0,};
    
    for(int i=0;i<X.length();i++)
    {
        firstnum[X[i]-'0']++;
    }
    for(int i=0;i<Y.length();i++)
    {
        secondnum[Y[i]-'0']++;
    }
    
    for(int i=9;i>=0;i--)
    {
        int minnum=firstnum[i]<secondnum[i]?firstnum[i]:secondnum[i];
        for(int j=0;j<minnum;j++)
        {
            answer+=(char)(i+'0');
        }
    }
    if(answer=="")
    {
        return "-1";
    }
    if(answer[0]=='0')
    {
        return "0";
    }
    
    
    return answer;
}