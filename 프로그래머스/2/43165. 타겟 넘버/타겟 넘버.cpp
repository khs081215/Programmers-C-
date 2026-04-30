#include <string>
#include <vector>

using namespace std;
int returncnt;

void DFS(vector<int> numbers,int target, int nowhere, int resultbuffer)
{
    if(nowhere==numbers.size())
    {
        if(resultbuffer==target) returncnt++;
    }
    else
    {
        DFS(numbers,target,nowhere+1,resultbuffer+numbers.at(nowhere));
        DFS(numbers,target,nowhere+1,resultbuffer-numbers.at(nowhere));
    }
}

int solution(vector<int> numbers, int target) {
    int answer = 0;
    int i,j;
    int cnt=0;
    DFS(numbers,target,0,0);
    answer=returncnt;
    
    
    
    return answer;
}