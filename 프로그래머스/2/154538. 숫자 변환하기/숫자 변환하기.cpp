#include <bits/stdc++.h>

using namespace std;

queue<pair<int,int>> bfsqueue;
int memo[1000001];


int BFS(int y,int n)
{
    while(!bfsqueue.empty())
    {
        pair<int,int> x=bfsqueue.front();
        bfsqueue.pop();
        if(x.first>y) continue;
        if(x.first==y) return x.second;
        
        
        if(x.first+n<1000001&&memo[x.first+n]==0) {
            memo[x.first+n]=1;
            bfsqueue.push({x.first+n,x.second+1});
        }
        if(x.first*2<1000001&&memo[x.first*2]==0) {
            memo[x.first*2]=1;
            bfsqueue.push({x.first*2,x.second+1});
        }
        if(x.first*3<1000001&&memo[x.first*3]==0) {
            memo[x.first*3]=1;
            bfsqueue.push({x.first*3,x.second+1});
        }
    }
    
    return -1;
}

int solution(int x, int y, int n) {
    int answer = 0;
    bfsqueue.push({x,0});
    answer=BFS(y,n);
    return answer;
}