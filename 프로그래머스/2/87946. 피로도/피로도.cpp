#include <string>
#include <vector>

using namespace std;


vector<vector<int>> initdungeons;

int visit[5001];

int lmax=0;

void DFS(int remaink,int n)
{
    if(lmax < n) lmax=n;
    n+=1;
    for(int i=0;i<initdungeons.size();i++)
    {
        if(visit[i]!=0) continue;
        if(initdungeons[i][0]>remaink) continue;
        visit[i]=n;
        DFS(remaink-initdungeons[i][1],n);
        visit[i]=0;
    }
}

int solution(int k, vector<vector<int>> dungeons) {
    int answer = -1;
    initdungeons=dungeons;
    
    DFS(k,0);

    return lmax;
}