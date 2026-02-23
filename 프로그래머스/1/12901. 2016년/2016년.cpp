#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    int day=0;
   for(int i=1;i<a;i++)
   {
       if(i==2)
       {
           day+=29;
       }
       else if(i%2==1&&i<8)
       {
           day+=31;
       }
       else if(i%2==0&&i<8)
       {
           day+=30;
       }
       else if(i%2==0)
       {
           day+=31;
       }
       else 
       {
           day+=30;
       }
   }
    day+=b-1;
    switch(day%7)
    {
        case 0:
            answer="FRI";
            break;
        case 1:
            answer="SAT";
            break;
        case 2:
            answer="SUN";
            break;
       case 3:
            answer="MON";
            break;
        case 4:
            answer="TUE";
            break;
        case 5:
            answer="WED";
            break;
        case 6:
            answer="THU";
            break;
    }
    
    
    return answer;
}