#include <string>
#include <vector>

using namespace std;

vector<vector<int>> allarr;

void DP(int ax,int ay, int dx, int dy)
{
    if(dx-ax==0) return;
    int buffer=allarr[ax][ay];
    bool biszip=false;
    for(int i=ax;i<dx;i++)
    {
        for(int j=ay;j<dy;j++)
        {
            if(allarr[i][j]!=2&&allarr[i][j]!=buffer)
            {
                biszip=true;
                if(biszip) break;
            }
        }
        if(biszip) break;
    }
    if(biszip)
    {
        DP(ax,ay,(ax+dx)/2,(ay+dy)/2);
        DP((ax+dx)/2,ay,dx,(ay+dy)/2);
        DP(ax,(ay+dy)/2,(ax+dx)/2,dy);
        DP((ax+dx)/2,(ay+dy)/2,dx,dy);

    }
    else
    {
        for(int i=ax;i<dx;i++)
         {
            for(int j=ay;j<dy;j++)
            {
               allarr[i][j]=2;
            }
        }
        allarr[ax][ay]=buffer;
    }
}



vector<int> solution(vector<vector<int>> arr) {
    vector<int> answer;
    allarr=arr;
    
    int numzero=0;
    int numone=0;
    
    DP(0,0,arr.size(),arr[0].size());
    
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[0].size();j++)
        {
            if(allarr[i][j]==0) numzero++;
            if(allarr[i][j]==1) numone++;
        }
    }
    answer.push_back(numzero);
    answer.push_back(numone);
    
    return answer;
}