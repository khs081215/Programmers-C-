#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    vector<int> arrsort;
    if(arr.size()==1) 
    {
        answer.push_back(-1);
    }
    else
    {
        arrsort=arr;
        sort(arrsort.begin(),arrsort.end());
        int min=arrsort[0];
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==min) continue;
            answer.push_back(arr[i]);
        }
    }
    return answer;
}