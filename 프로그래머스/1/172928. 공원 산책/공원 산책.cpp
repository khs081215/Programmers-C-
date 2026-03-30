#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    int nowlocationx=0;
    int nowlocationy=0;
    int maxlocationx=park.size();
    int maxlocationy=park[0].length();
    
    
    for(int i=0;i<park.size();i++)
    {
        for(int j=0;j<park[i].length();j++)
        {
            if(park[i][j]=='S')
            {
                nowlocationx=i;
                nowlocationy=j;
                break;
            }
        }
    }
    for(int i=0;i<routes.size();i++)
    {
        int dirx=0;
        int diry=0;
        bool flag=false;
        switch(routes[i][0])
        {
            case 'E':
                dirx=0;
                diry=1;
                break;
            case 'W':
                dirx=0;
                diry=-1;
                break;   
           case 'N':
                dirx=-1;
                diry=0;
                break; 
           case 'S':
                dirx=1;
                diry=0;
                break; 
        }
        for(int j=1;j<=(routes[i][2]-'0');j++)
        {
            if(nowlocationx+dirx*j<0||
               nowlocationx+dirx*j>=maxlocationx||
              nowlocationy+diry*j<0||
              nowlocationy+diry*j>=maxlocationy)
            {
                flag=true;
                break;
            }
            if(park[nowlocationx+dirx*j][nowlocationy+diry*j]=='X')
            {
                flag=true;
                break;
            }
        }
        if(flag) continue;
        nowlocationx+=dirx*(routes[i][2]-'0');
        nowlocationy+=diry*(routes[i][2]-'0');
        
    }
    answer.push_back(nowlocationx);
    answer.push_back(nowlocationy);
    
    
    return answer;
}