#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer;
    
    for(int i=0;i<arr.size()-1;i++)
    {
        int lcd=1;
        int min=arr[i]<arr[i+1]?arr[i]:arr[i+1];
        for(int j=1;j<=min;j++)
        {
            if(arr[i]%j==0&&arr[i+1]%j==0) lcd=j;
        }
        arr[i+1]=lcd*(arr[i]/lcd)*(arr[i+1]/lcd);
    }
    answer=arr[arr.size()-1];
    
    
    
    
    return answer;
}