#include <bits/stdc++.h>

using namespace std;

bool issosu(int a)
{
    if(a<=0) return false;
    if(a==1) return false;
    if(a==2) return true;
    if(a==3) return true;
    if(a==4) return false;
    
    for(int i=2;i<=a/2;i++)
    {
        if(a%i==0) return false;
    }
    return true;
}


int solution(string numbers) {
    int answer = 0;
    unordered_map<int,int> nummap;
    vector<int> numvector;
    
    for(int i=0;i<numbers.length();i++)
    {
        numvector.push_back(numbers[i]-'0');
    }
    sort(numvector.begin(),numvector.end());
    
    
    do
    {
        for(int i=1;i<=numvector.size();i++)
        {
            int buffer=0;
            for(int j=0;j<i;j++)
            {
                buffer+=numvector[j];
                buffer*=10;
            }
            buffer/=10;
            nummap[buffer]++;
        }
    }
    while(next_permutation(numvector.begin(),numvector.end()));
    
    for(auto numnumpair : nummap)
    {
        if(issosu(numnumpair.first)) answer++;
    }
    
    
    
    return answer;
}