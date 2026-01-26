#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int normn=n;
    int normm=m;
    int narr[1000001]={0,};
    int marr[1000001]={0,};
    int div=2;
    int first=1,second=1;
    while(n>1)
    {
        if(n%div==0)
        {
            narr[div]++;
            n/=div;
        }
        else div++;
    }
    div=2;
    while(m>1)
    {
        if(m%div==0)
        {
            marr[div]++;
            m/=div;
        }
        else div++;
    }
    int i=2;
    while(true)
    {
        if(narr[i]!=0&&marr[i]!=0)
        {
            for(int in=0;in<(narr[i]>marr[i]?marr[i]:narr[i]);in++)
            {
                first*=i;
            }
            for(int in=0;in<(narr[i]>marr[i]?narr[i]:marr[i]);in++)
            {
                second*=i;
            }
        }
        else if(narr[i]!=0)
        {
            for(int in=0;in<narr[i];in++)
            {
                second*=i;
            }
        }
        else if(marr[i]!=0)
        {
            for(int in=0;in<marr[i];in++)
            {
                second*=i;
            }
        }
        i++;
        if(normn<i&&normm<i) break;
    }
    answer.push_back(first);
    answer.push_back(second);
    
    
    return answer;
}