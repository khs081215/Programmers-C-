#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    int minx=51, miny=51, maxx=0,maxy=0;
    for(int i=0;i<wallpaper.size();i++)
    {
        for(int j=0;j<wallpaper[i].length();j++)
        {
            if(wallpaper[i][j]=='#')
            {
                if(minx>i) minx=i;
                if(maxx<i) maxx=i;
                if(miny>j) miny=j;
                if(maxy<j) maxy=j;
            }
        }
    }
    answer={minx,miny,maxx+1,maxy+1};
    
    
    return answer;
}