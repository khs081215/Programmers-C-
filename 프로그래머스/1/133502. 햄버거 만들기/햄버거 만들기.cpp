#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    vector<int> hamstack;
    for(int i=0;i<ingredient.size();i++)
    {
        hamstack.push_back(ingredient[i]);
        int hamsize=hamstack.size();
        if(hamstack.size()>=4)
        {
          if(hamstack[hamsize-4]==1&&hamstack[hamsize-3]==2&&
              hamstack[hamsize-2]==3&&hamstack[hamsize-1]==1)
          {
              answer++;
              for(int j=0;j<4;j++)
              {
                  hamstack.pop_back();
              }
          }
        }
    }
    
    return answer;
}