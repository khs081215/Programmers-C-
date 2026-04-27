#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 0;
    int value=1;
    unordered_map<string,int> c_map;
    for(int i=0;i<clothes.size();i++)
    {
        c_map[clothes[i][1]]++;
    }
    for(auto it=c_map.begin();it!=c_map.end();it++)
    {
        value*=(it->second+1);
    }
    answer=value-1;
    
    return answer;
}