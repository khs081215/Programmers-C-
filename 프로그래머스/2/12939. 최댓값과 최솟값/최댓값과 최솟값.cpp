#include <bits/stdc++.h>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> numvec;
    
    bool isplus=true;
    int numbuff=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ')
        {
            if(!isplus) numbuff*=-1;
            numvec.push_back(numbuff);
            numbuff=0;
            isplus=true;
            continue;
        }
        
        if(s[i]=='-')
        {
            isplus=false;
            continue;
        }
        
        numbuff*=10;
        numbuff+=s[i]-'0';
        
        
    }
    if(!isplus) numbuff*=-1;
    numvec.push_back(numbuff);
    
    
    sort(numvec.begin(),numvec.end());
    
    stack<int> numstack;
    if(numvec[0]<0){
        answer+='-';
        numvec[0]*=-1;
    }
    while(numvec[0]>0)
    {
        numstack.push(numvec[0]%10);
        numvec[0]/=10;
    }
    while(!numstack.empty())
    {
        answer+=numstack.top()+'0';
        numstack.pop();
    }
    answer+=' ';
    int last=numvec.size()-1;
    if(numvec[last]<0){
        answer+='-';
        numvec[last]*=-1;
    }
    while(numvec[last]>0)
    {
        numstack.push(numvec[last]%10);
        numvec[last]/=10;
    }
    while(!numstack.empty())
    {
        answer+=numstack.top()+'0';
        numstack.pop();
    }
    
    
    return answer;
}