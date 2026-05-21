#include <bits/stdc++.h>

using namespace std;

int where[1000001]={0,};

//4 5   123
//43   5 12        





int solution(vector<int> order) {
    int answer = 0;
    vector<int> allvec;
    queue<int> allqueue;
    queue<int> boxqueue;
    
    for(int i=0;i<order.size();i++)
    {
        allqueue.push(i+1);
    }
    //12345
    for(int cnt=0;cnt<order.size();cnt++)
    {
       if(where[order[cnt]]==0)
       {
            int queuesizecapture=allqueue.size();
           for(int i=0;i<queuesizecapture;i++)
           {
               if(order[cnt]!=allqueue.front())
               {
                   allvec.push_back(allqueue.front());
                   where[allqueue.front()]=1;
                   allqueue.pop();
               }
               else
               {
                   answer++;
                   where[order[cnt]]=1;
                   allqueue.pop();
                   break;
               }
               
           }
       }
        else if(allvec[allvec.size()-1]==order[cnt])
        {
            allvec.pop_back();
            answer++;
        }
        else break;
    }
    
    
    
    return answer;
}