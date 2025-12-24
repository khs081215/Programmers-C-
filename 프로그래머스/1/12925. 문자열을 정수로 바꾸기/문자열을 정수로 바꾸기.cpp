#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    bool isminus=false;
    if(s[0]=='-') isminus=true;
    for(int i=0;i<s.length();i++){
        if(isminus&&i==0) continue;
        if(s[0]=='+'&&i==0)continue;
        answer+=s[i]-'0';
        if(i!=s.length()-1){
            answer*=10;
        }
    }
    if(isminus)answer*=-1;
    return answer;
}