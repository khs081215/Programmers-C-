#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    vector<int> answer;
    
    for(int i=0;i<query.size();i++)
    {
        vector<int> buffer;
        if(i%2==0)
        {
            for(int j=0;j<=query[i];j++)
            {
                buffer.push_back(arr[j]);
            }
        }
        else
        {
            for(int j=query[i];j<arr.size();j++)
            {
                buffer.push_back(arr[j]);   
            }
        }
        arr=buffer;
    }
    answer=arr;
    return answer;
}