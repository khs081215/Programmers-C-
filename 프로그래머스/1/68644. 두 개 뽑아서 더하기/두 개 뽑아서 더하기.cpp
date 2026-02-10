#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    map<int,int> nmap;
    
    for(int i=0;i<numbers.size();i++)
    {
        for(int j=i+1;j<numbers.size();j++)
        {
            if(nmap.find(numbers[i]+numbers[j])==nmap.end())
            {
                nmap[numbers[i]+numbers[j]]++;
            }
        }
    }
    for(auto it:nmap)
    {
        answer.push_back(it.first);
    }
    
    return answer;
}