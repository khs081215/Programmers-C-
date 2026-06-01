#include <string>
#include <vector>

using namespace std;
int arr[1000][1000];


vector<int> solution(int n) {
    vector<int> answer;
    int i,j;
    int cnt=1;
    int nowx=0, nowy=0;
    int nextx=1, nexty=0;
    while(cnt<((n*(n+1)/2+1)))
    {
        arr[nowx][nowy]=cnt++;
        if(nowx+nextx==n) 
        {
            //맨 아래에 닿을 경우
            nextx=0;
            nexty=1;
            nowx+=nextx;
            nowy+=nexty;
            continue;
        }
        if(nowy+nexty==n) 
        {
            //맨 오른쪽에 닿을 경우
            nextx=-1;
            nexty=-1;
            nowx+=nextx;
            nowy+=nexty;
            continue;
        }
        //방문이 불가능할 경우
        if(arr[nowx+nextx][nowy+nexty]!=0)
        {
            if(nextx==1)
            {
                nextx=0;
                nexty=1;
            }
            else if(nextx==0)
            {
                nextx=-1;
                nexty=-1;
            }
            else
            {
                nextx=1;
                nexty=0;
            }
        }
        nowx+=nextx;
        nowy+=nexty;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<i+1;j++)
        {
            answer.push_back(arr[i][j]);
        }
    }
    
    
    
    return answer;
}