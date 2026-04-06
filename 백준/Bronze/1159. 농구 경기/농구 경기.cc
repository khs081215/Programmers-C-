#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin>>num;
    map<char,int> smap;
    for(int i=0;i<num;i++)
        {
            string buffer;
            cin>>buffer;
            smap[buffer[0]]++;
            
        }
    bool bIsexist=false;
    for(auto it:smap)
        {
            if(it.second>=5)
            {
                bIsexist=true;
                cout<<it.first;
            }
        }
    if(!bIsexist)
    {
        cout<<"PREDAJA";
    }

    
    return 0;
}