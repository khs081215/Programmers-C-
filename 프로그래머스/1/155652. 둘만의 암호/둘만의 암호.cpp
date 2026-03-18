#include <string>
#include <vector>
#include <unordered_map>

using namespace std;


string solution(string s, string skip, int index) {
    string answer = "";
    unordered_map<char,int> skipmap;
    
    for(int i=0;i<skip.length();i++)
    {
        skipmap[skip[i]]=1;
    }
    for(int i=0;i<s.length();i++)
    {
        char buffer=s[i];
        for(int j=1;j<=index;j++)
        {
            if(buffer+j>'z')
            {
                buffer-=1;
                buffer-='z';
                buffer+='a';
            }
            while(skipmap.find((char)(buffer+j))!=skipmap.end())
            {
                buffer+=1;
                if(buffer+j>'z')
                {
                    buffer-=1;
                    buffer-='z';
                    buffer+='a';
                }
            }
            if(j==index)
            {
                answer+=(char)(buffer+j);
            }
        }
    }
    
    return answer;
}