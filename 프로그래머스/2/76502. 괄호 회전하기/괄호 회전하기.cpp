#include <bits/stdc++.h>

using namespace std;

int solution(string s) {
    int answer = 0;
    bool bdirection=false;
    int cnt=0;
    
    

    
    for(int j=0;j<s.length();j++)
    {
        stack<char> solstack;

        for(int i=j;i<s.length()+j;i++)
        {
            int real=i>s.length()-1?i-s.length():i;
            
            if(solstack.empty())
            {
                solstack.push(s[real]);
                continue;
            }
            
        if(solstack.top()=='('&&s[real]==')'||
           solstack.top()=='['&&s[real]==']'||
           solstack.top()=='{'&&s[real]=='}'
          )
        {
            solstack.pop();
            continue;
        }
        solstack.push(s[real]);
        }
        if(solstack.empty()) answer++;
        
        

        
    }
    
    
    
    
    
    
    
    
    return answer;
}