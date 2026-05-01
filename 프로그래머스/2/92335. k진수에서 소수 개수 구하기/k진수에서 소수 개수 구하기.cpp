#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n, int k) {
    int answer = 0;
    int div,ndiv;
    long int number=0;
    int num[1000000];
    int i,j,l;
    int zerok=0;
    

    for(i=0;;i++)
    {
        div=n/k;
        ndiv=n%k;
        num[i]=ndiv;
        if(div<1) break;
        n=div;
    }  
    
    //j       0  1  2
    //i       5  5  5
    //num[j]  1  1  0
    //zerok   0  0  3
    //number  1  11 
    
    for(j=0;j<i+1;j++)
    {
        if(num[j]!=0)
        {
            long int buffer=num[j];
            for(l=0;l<j-zerok;l++)
            {
                buffer*=10;
            }
            number+=buffer;
        }
        else
        {
            if(number!=0&&number!=1)
            {
                for(l=2;l<(int)sqrt(number)+1;l++)
                 {
                     if(number%l==0) break;
                 }
                 if(l==(int)sqrt(number)+1) answer++;
            }
                 zerok=j+1;
                 number=0;
                  
         }
        if(j==i)
        {
            for(l=2;l<(int)sqrt(number)+1;l++)
            {
                if(number%l==0) break;
            }
            if(l==(int)sqrt(number)+1) answer++;
        }
        
    }
    
    return answer;
}