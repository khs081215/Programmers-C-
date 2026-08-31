#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    for(int i=0;i<arr.size();i++)
    {
        int buffer=arr[i];
        if(arr[i]>=50&&arr[i]%2==0)
        {
            buffer=arr[i]/2;
        }
        else if(arr[i]<50&&arr[i]%2==1)
        {
            buffer=arr[i]*2;
        }
        answer.push_back(buffer);
    }
    
    
    
    return answer;
}