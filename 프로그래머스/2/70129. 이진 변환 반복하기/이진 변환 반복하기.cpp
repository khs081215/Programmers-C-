#include <bits/stdc++.h>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int zerocnt=0;
    int cnt=0;
    int bincnt=0;
    
    while(s!="1")
    {
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='1') cnt++;
        }
        zerocnt+=s.length()-cnt;
        s="";
        stack<int> numstack;
        while(cnt>0)
        {
            numstack.push(cnt%2);
            cnt/=2;
        }
        while(!numstack.empty())
        {
            s+=numstack.top()+'0';
            numstack.pop();
        }
        bincnt++;
    }
    answer.push_back(bincnt);
    answer.push_back(zerocnt);
    
    
    return answer;
}