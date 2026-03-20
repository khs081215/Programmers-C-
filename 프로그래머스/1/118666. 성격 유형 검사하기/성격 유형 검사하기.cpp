#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    unordered_map<char,int> smap;
    
    for(int i=0;i<survey.size();i++)
    {
        if(choices[i]>4)
        {
            smap[survey[i][1]]+=choices[i]-4;
        }
        else 
        {
            smap[survey[i][0]]+=4-choices[i];
        }
    }
    if(smap['R']>=smap['T'])
    {
        answer+='R';
    }
    else
    {
        answer+='T';
    }
    
    if(smap['C']>=smap['F'])
    {
        answer+='C';
    }
    else
    {
        answer+='F';
    }
    
    if(smap['J']>=smap['M'])
    {
        answer+='J';
    }
    else
    {
        answer+='M';
    }
    
    if(smap['A']>=smap['N'])
    {
        answer+='A';
    }
    else
    {
        answer+='N';
    }
    
    
    
    return answer;
}