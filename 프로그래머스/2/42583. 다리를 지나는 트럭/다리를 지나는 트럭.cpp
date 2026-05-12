#include <bits/stdc++.h>

using namespace std;
//2+3+2+1초
//10+1초
// 100+1*9+1
int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    int buffer=0;
    queue<pair<int,int>> bqueue;
    for(int i=0;i<truck_weights.size();i++)
    {
        if(buffer+truck_weights[i]<=weight)
        {
            // a:1 buf:7 q: 3 
            // a:3 buf:4 q: 5
            // a:4 buf:9 q:5/6
            // a:5 buf:5 q:6
            // a:6 buf:6 q:8
            answer++;
            buffer+=truck_weights[i];
            bqueue.push({truck_weights[i],answer+bridge_length});
            
            if(answer==bqueue.front().second)
            {
                buffer-=bqueue.front().first;
                bqueue.pop();
            }
            continue;
        }

        while(buffer+truck_weights[i]>weight)
        {
            answer=bqueue.front().second;
            buffer-=bqueue.front().first;
            bqueue.pop();
        }

        buffer+=truck_weights[i];
        bqueue.push({truck_weights[i],answer+bridge_length});
    }
    
    while(!bqueue.empty())
    {
        answer=bqueue.front().second;
        bqueue.pop();
    }
    
    
    
    return answer;
}