#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> topping) {
    int answer = 0;
    unordered_map<int,int> vmap;
    unordered_map<int,int> lmap;
    
    for(int i=0;i<topping.size();i++)
    {
        vmap[topping[i]]++;
    }
    
    int lcnt=0;
    int rcnt=vmap.size();
    if(lcnt==rcnt) answer++;
    for(int i=0;i<topping.size()-1;i++)
    {
        vmap[topping[i]]--;
        if(vmap[topping[i]]==0)
        {
            vmap.erase(topping[i]);
        }
        lmap[topping[i]]++;
        
        if(vmap.size()==lmap.size()) answer++;
        
    }
        
    
    
    return answer;
}