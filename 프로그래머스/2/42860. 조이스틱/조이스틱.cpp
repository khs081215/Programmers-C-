#include <string>
#include <vector>

using namespace std;
/*

XXAXAAAAAAAXXX



*/
int solution(string name) {
    int answer = 0;
    for(int i=0;i<name.length();i++)
    {
        int alpacnt=name[i]-'A';
        if(alpacnt>('Z'-name[i]+1))alpacnt='Z'-name[i]+1;
        answer+=alpacnt;
    }
    if(answer==0) return answer;
    
    
    int forward=0;
    int backward=0;
    int sum=0;
    sum=name.length()-1;
    for(int i=0;i<name.length();i++)
    {
        int abuffer,bbuffer;
        if(name[i]!='A')
        {
            forward=i;
            int j=i;
            for(j=i+1;j<name.length();j++)
            {  
                if(name[j]!='A')break;
            }
            backward=name.length()-j;
            abuffer=forward*2+backward;
            bbuffer=forward+backward*2;
            abuffer=abuffer>bbuffer?bbuffer:abuffer;
            sum=sum>abuffer?abuffer:sum;
        }
    }
    answer+=sum;

    return answer;
}