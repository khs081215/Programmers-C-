#include <string>
#include <iostream>
#include <vector>
#include <sstream>
#include <cstring>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    int reportnum[1000][1000]={0,};
    string uid,rid;
    
    int i,j,l;
    int rsum=0;
    int cnt=0;
    int reportid[1000]={0,};
    for(i=0;i<report.size();i++)
    {
        istringstream iss(report.at(i));
        iss>>uid>>rid;
        for(j=0;j<id_list.size();j++)
        {
            if(id_list.at(j).compare(uid)==0)
            {
                for(l=0;l<id_list.size();l++)
                {
                    if(id_list.at(l).compare(rid)==0)
                        reportnum[j][l]=1;
                }
            }
        }       
    }
    for(i=0;i<id_list.size();i++)
    {
        for(j=0;j<id_list.size();j++)
        {
            rsum+=reportnum[j][i];
        }
        if(rsum>k-1) reportid[i]=1;
        rsum=0;
    }
    for(i=0;i<id_list.size();i++)
    {
        for(j=0;j<id_list.size();j++)
        {
            if(reportnum[i][j]==1&&reportid[j]==1) cnt++;
        }
        answer.push_back(cnt);
        cnt=0;
    }
    
    
    
    return answer;
}