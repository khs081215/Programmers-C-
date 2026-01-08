#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    int i;
    
    for(i=0;i<phone_number.length();i++)
    {
        if((i+5)>(phone_number.length())) answer+=phone_number[i];
        else answer+="*";
    }
    

    return answer;
}