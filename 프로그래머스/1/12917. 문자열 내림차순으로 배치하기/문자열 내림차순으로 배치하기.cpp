#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<char> cvector;
    for(int i=0;i<s.length();i++)
    {
        cvector.push_back(s[i]);
    }
    sort(cvector.begin(),cvector.end());
    for(int i=s.length()-1;i>=0;i--)
    {
        answer=answer+cvector[i];
    }
    return answer;
}