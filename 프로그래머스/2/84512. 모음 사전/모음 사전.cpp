#include <bits/stdc++.h>

using namespace std;



int solution(string word) {
    int answer = 0;
    vector<int> strvec;
    
    for(int ia=1;ia<6;ia++)
    {
        for(int ib=0;ib<6;ib++)
        {
            if(ib==0)
            {
                strvec.push_back(ia*10000);
                continue;
            }
            for(int ic=0;ic<6;ic++)
            {
                if(ic==0)
                {
                    strvec.push_back(ia*10000+ib*1000);
                    continue;
                }   
                for(int id=0;id<6;id++)
                {
                    if(id==0)
                     {
                        strvec.push_back(ia*10000+ib*1000+ic*100);
                        continue;
                    } 
                    for(int ie=0;ie<6;ie++)
                    {
                        strvec.push_back(ia*10000+ib*1000+ic*100+id*10+ie);
                    }
                }
            }
        }
    }
    
    int wordint=0;
    for(int i=0;i<word.length();i++)
    {
        wordint*=10;
        if(word[i]=='A')wordint+=1;
        if(word[i]=='E')wordint+=2;
        if(word[i]=='I')wordint+=3;
        if(word[i]=='O')wordint+=4;
        if(word[i]=='U')wordint+=5;
    }
    for(int i=word.length();i<5;i++)
    {
        wordint*=10;
    }

    std::sort(strvec.begin(),strvec.end());
    int cnt=0;
    
    for(auto& it:strvec)
    {
        cnt++;
        if(it==wordint) return cnt;
    }
    
    
    return cnt;
}