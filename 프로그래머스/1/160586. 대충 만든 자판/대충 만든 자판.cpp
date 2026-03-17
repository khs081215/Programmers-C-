#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    unordered_map<char,int> keypadmap;
    
    for(int i=0;i<keymap.size();i++)
    {
        for(int j=0;j<keymap[i].length();j++)
        {
            if(keypadmap.find(keymap[i][j])!=keypadmap.end())
            {
                if(keypadmap[keymap[i][j]]>(j+1))
                {
                    keypadmap[keymap[i][j]]=j+1;
                }
            }
            else
            {
                keypadmap[keymap[i][j]]=j+1;
            }
        }
    }
    
    for(int i=0;i<targets.size();i++)
    {
        int cnt=0;
        bool notcontainkeymap=false;
        for(int j=0;j<targets[i].length();j++)
        {
            if(keypadmap.find(targets[i][j])!=keypadmap.end())
            {
                cnt+=keypadmap[targets[i][j]];
            }
            else
            {
                notcontainkeymap=true;
            }
        }
        if(notcontainkeymap) answer.push_back(-1);
        else
        {
            answer.push_back(cnt);
        }
    }
    
    return answer;
}