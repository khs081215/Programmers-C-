#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    
    for(long long i=left;i<=right;i++)
    {
        long long a=i/n;
        long long b=i%n;
        long long value=a>b?a+1:b+1;
        
        answer.push_back(value);
    }
    
    
    return answer;
}