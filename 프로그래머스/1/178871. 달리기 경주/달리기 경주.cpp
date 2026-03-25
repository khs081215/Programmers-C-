#include <string>
#include <vector>
#include <unordered_map>

using namespace std;



vector<string> solution(vector<string> players, vector<string> callings) {
    unordered_map<string, int> plmap;
    
    for(int i=0;i<players.size();i++)
    {
        plmap[players[i]]=i;
    }
    
    for(auto& call : callings)
    {
        int nowrank=plmap[call];
        plmap[call]--;
        plmap[players[nowrank-1]]++;
        
        string buffer;
        buffer=players[nowrank];
        players[nowrank]=players[nowrank-1];
        players[nowrank-1]=buffer;
        
    }
    return players;
}