#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    for(int i=0;i<number.size()-2;i++)
    {
        for(int j=i+1;j<number.size()-1;j++)
        {
            for(int l=j+1;l<number.size();l++)
            {
                if(number[i]+number[j]+number[l]==0) answer++;
            }
        }
    }
    return answer;
}