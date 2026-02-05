#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int powten=1;
    string buffer="";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='0'&&(s[i]<='9'))
        {
            buffer+=s[i];
            continue;
        }
        if(s[i]=='z') 
        {
            buffer+='0';
            i+=3;
             continue;
        }
        if(s[i]=='o') 
        {
            buffer+='1';
            i+=2;
             continue;
        }
        if(s[i]=='t'&&s[i+1]=='w') 
        {
            buffer+='2';
            i+=2;
             continue;
        }
        else if(s[i]=='t')
        {
            buffer+='3';
            i+=4;
             continue;
        }
        if(s[i]=='f'&&s[i+1]=='o') 
        {
            buffer+='4';
            i+=3;
             continue;
        }
        else if(s[i]=='f')
        {
            buffer+='5';
            i+=3;
             continue;
        }
        if(s[i]=='s'&&s[i+1]=='i') 
        {
            buffer+='6';
            i+=2;
             continue;
        }
        else if(s[i]=='s')
        {
            buffer+='7';
            i+=4;
             continue;
        }
        if(s[i]=='e') 
        {
            buffer+='8';
            i+=4;
             continue;
        }
        if(s[i]=='n') 
        {
            buffer+='9';
            i+=3;
             continue;
        }
    }
    for(int i=buffer.length()-1;i>=0;i--)
    {
        answer+=(buffer[i]-'0')*powten;
        powten*=10;
    }
    
    
    
    return answer;
}