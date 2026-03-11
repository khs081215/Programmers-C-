#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> bword={"aya","ye","woo","ma"};
    int visit=-1;
    int nowhere=0;
    
    for(int i=0;i<babbling.size();i++)
    {
        nowhere=0;
        visit=-1;
        while(true)
        {
            int cnt=0;
            for(int j=0;j<4;j++)
             {
                 if(visit==j) 
                 {
                     cnt++;
                     continue;
                 }
                 if(babbling[i].substr(nowhere,bword[j].length())==bword[j])
                 {
                     visit=j;
                        nowhere+=bword[j].length();
                 }
                else
                {
                    cnt++;
                }
            }
            if(nowhere==babbling[i].length())
            {
                answer++;
                break;
            }
            if(cnt==4)
            {
                break;
            }
            
            
        }
        
    }
    
    return answer;
}