#include <bits/stdc++.h>

using namespace std;
int arr[103][103];
int ivisit[103][103];


int DFS(int nowx,int nowy)
{
   if(arr[nowx][nowy]==0||ivisit[nowx][nowy]==1) return 0;
    ivisit[nowx][nowy]=1;
    
    return DFS(nowx+1,nowy)+DFS(nowx-1,nowy)+DFS(nowx,nowy-1)+DFS(nowx,nowy+1)+arr[nowx][nowy];
}

vector<int> solution(vector<string> maps) {
    vector<int> answer;
    
    for(int i=0;i<maps.size();i++)
    {
        for(int j=0;j<maps[0].length();j++)
        {
            int buffer=0;
            if(maps[i][j]!='X')
            {
                buffer=maps[i][j]-'0';
            }
            arr[i+1][j+1]=buffer;
        }
    }
     for(int i=0;i<maps.size();i++)
    {
        for(int j=0;j<maps[0].length();j++)
        {
            int buffer=DFS(i+1,j+1);
            if(buffer!=0)
            {
                answer.push_back(buffer);
            }
        }
     }
    sort(answer.begin(),answer.end());
    if(answer.empty())
    {
        answer.push_back(-1);
    }
    
    return answer;
}