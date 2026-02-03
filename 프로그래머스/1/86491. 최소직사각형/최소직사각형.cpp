#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int maxx=0,maxy=0;
    for(int i=0;i<sizes.size();i++)
    {
        if(sizes[i][0]>sizes[i][1])
        {
            maxx=maxx<sizes[i][0]?sizes[i][0]:maxx;
            maxy=maxy<sizes[i][1]?sizes[i][1]:maxy;
        }
        else
        {
            maxx=maxx<sizes[i][1]?sizes[i][1]:maxx;
            maxy=maxy<sizes[i][0]?sizes[i][0]:maxy;
        }
    }
    answer=maxx*maxy;
    
    return answer;
}