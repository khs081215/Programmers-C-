#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int num;

bool comp(string a,string b)
{
    if(a[num]<b[num]) return true;
    if(a[num]>b[num]) return false;
    int max=a.length()<b.length()?b.length():a.length();
    for(int i=0;i<max;i++)
    {
        if(a[i]<b[i]) return true;
        if(a[i]>b[i]) return false;
    }
}

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    num=n;
    sort(strings.begin(),strings.end(),comp);
    answer=strings;
    return answer;
}