#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> aledges;
vector<int> alinfo;

int sheepmax;

void BT(int sheep,int wolf,vector<int> nextNodes)
{
    if(sheepmax<sheep)sheepmax=sheep;
    
    for(int i=0;i<nextNodes.size();i++)
    {
        int nextwolf=wolf;
        int nextsheep=sheep;
        if(alinfo[nextNodes[i]]==1)
        {
            if(sheep<=wolf+1) continue;
            nextwolf=wolf+1;
        }
        else nextsheep+=1;
        
        
        vector<int> nextCC=nextNodes;
        nextCC.erase(nextCC.begin()+i);
        
        for(int j=0;j<aledges.size();j++)
        {
            if(aledges[j][0]==nextNodes[i])
            {
                nextCC.push_back(aledges[j][1]);
            }
        }
        BT(nextsheep,nextwolf,nextCC);
    }
    
}

int solution(vector<int> info, vector<vector<int>> edges) {
    alinfo=info;
    aledges=edges;
    vector<int> paramNodes={0};
    
    BT(0,0,paramNodes);
    
    return sheepmax;
}