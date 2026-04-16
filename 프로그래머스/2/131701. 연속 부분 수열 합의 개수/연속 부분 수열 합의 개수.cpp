#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    unordered_map<int,int> smap;
    
    for(int i=1;i<=elements.size();i++)
    {
        for(int j=0;j<elements.size();j++)
        {
            int buffer=0;
            for(int k=0;k<i;k++)
            {
                buffer+=elements[j+k>elements.size()-1?j+k-elements.size():j+k];
            }
            smap[buffer]++;
        }
    }
    
    for(auto it:smap)
    {
        answer++;
    }
    
    
    
    return answer;
}