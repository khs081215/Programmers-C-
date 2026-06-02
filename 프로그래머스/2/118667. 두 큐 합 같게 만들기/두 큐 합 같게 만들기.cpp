#include <bits/stdc++.h>

using namespace std;

//14/16    앞을 준다. 272 / 46513   11/ 19 

int solution(vector<int> queue1, vector<int> queue2) {
    queue<int> q1;
    queue<int> q2;
    int cnt=0;
    long long sum1=0;
    long long sum2=0;
    int maxcnt=queue1.size()+queue2.size();
    maxcnt*=2;
    for(int i=0;i<queue1.size();i++)
    {
        q1.push(queue1[i]);
        sum1+=queue1[i];
    }
    for(int i=0;i<queue2.size();i++)
    {
        q2.push(queue2[i]);
        sum2+=queue2[i];
    }
    
    while(1)
    {
        if(sum1==sum2) return cnt;
        if(cnt>maxcnt) return -1;
        
        if(sum1>sum2)
        {
            int buffer=q1.front();
            q1.pop();
            q2.push(buffer);
            sum1-=buffer;
            sum2+=buffer;
            cnt++;
        }
        else
        {
            int buffer=q2.front();
            q2.pop();
            q1.push(buffer);
            sum2-=buffer;
            sum1+=buffer;
            cnt++;
        }
    }
    
    
    
    
 return cnt;
}