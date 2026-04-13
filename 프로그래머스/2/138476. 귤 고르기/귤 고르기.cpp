#include <bits/stdc++.h>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    unordered_map<int,int> tanmap;
    priority_queue<int> tanque;
    
    for(int i=0;i<tangerine.size();i++)
    {
        tanmap[tangerine[i]]++;
    }
    for(auto it=tanmap.begin();it!=tanmap.end();++it)
    {
        tanque.push(it->second);
    }
    while(k>0)
    {
            k-=tanque.top();
            tanque.pop();
            answer++;
    }
    
    
    return answer;
}