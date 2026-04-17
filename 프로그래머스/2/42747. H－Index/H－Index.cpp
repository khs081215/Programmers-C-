#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    map<int,int> amap;
    
    for(int i=0;i<citations.size();i++)
    {
        amap[citations[i]*(-1)]++;
    }
    int cnt=0;
    for(auto it: amap)
    {
        if(it.first==0)
        {
            return 0;
        }
        cnt+=it.second;
        if(it.first*(-1)==cnt)
        {
            return cnt;
        }
        
        
        if(it.first*(-1)<cnt)
        {
            cnt-=it.second;
            if(cnt==0) return it.first*(-1);
            return cnt;
            
            
            //[4, 4, 4, 4, 4, 4] 4
            
            // 4->6
            //[0, 1, 5, 3] 
            //
            //[10, 9, 8, 6] 4
            // h번 이상 인용 : h 이상.
            // 나머지 가 h번 이하 인용 
            // 가장 큰 수.
            //[0,1,2,2,5,5,5,5]
            // 5 ->4
            // 2 -> 6
            //
        }
    }
    
    answer=cnt;
    
    return answer;
}