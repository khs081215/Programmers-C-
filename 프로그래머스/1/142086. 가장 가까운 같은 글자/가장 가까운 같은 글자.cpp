#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    unordered_map<char,int> dmap;
    
    for(int i=0;i<s.length();i++)
    {
        if(dmap.find(s[i])!=dmap.end())
        {
            answer.push_back(i-dmap[s[i]]);
            dmap[s[i]]=i;
        }
        else
        {
            answer.push_back(-1);
            dmap[s[i]]=i;
        }
    }
    
    
    
    return answer;
}