#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    answer=s.substr(s.length()/2-1+s.length()%2,2-(s.length()%2));
    return answer;
}