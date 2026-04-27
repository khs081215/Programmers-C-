#include <bits/stdc++.h>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    vector<unordered_map<string,int>> mvec;
    
    for(int i=0;i<discount.size();i++)
    {
        unordered_map<string,int> buffermap;
        for(int j=i;j<(i+10>discount.size()?discount.size():i+10);j++)
        {
            buffermap[discount[j]]++;
        }
        mvec.push_back(buffermap);
    }
    
    for(int i=0;i<discount.size();i++)
    {
        bool bisalldiscount=true;
        for(int j=0;j<want.size();j++)
        {
            if(mvec[i][want[j]]<number[j]) {
                bisalldiscount=false;
                break;
            }
        }
        if(bisalldiscount) answer++;
        
    }
    
    
    
    return answer;
}