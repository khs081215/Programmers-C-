#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    unordered_map<char,vector<int>> termmap;
    
    for(int i=0;i<terms.size();i++)
    {
        int termmonth;
        if(terms[i].length()==3)
        {
            termmonth=terms[i][2]-'0';
        }
        else if(terms[i].length()==5)
        {
            termmonth=(terms[i][2]-'0')*100+(terms[i][3]-'0')*10+terms[i][4]-'0';
        }
        else
        {
            termmonth=(terms[i][2]-'0')*10+terms[i][3]-'0';
        }
        vector<int> dayvector;
        int todayyear=(today[0]-'0')*1000+(today[1]-'0')*100+
            (today[2]-'0')*10+(today[3]-'0');
        int todaymonth=(today[5]-'0')*10+(today[6]-'0');
        int todayday=(today[8]-'0')*10+(today[9]-'0');
        
        todaymonth-=termmonth;
        

       
        while(todaymonth<=0)
        {
            todayyear-=1;
            todaymonth+=12;
        }
        vector<int> daydayday={todayyear,todaymonth,todayday};
        dayvector=daydayday;
        termmap[terms[i][0]]=dayvector;
    }
    
    for(int i=0;i<privacies.size();i++)
    {
        vector<int> lastday=termmap[privacies[i][11]];
        int todayyear=(privacies[i][0]-'0')*1000+(privacies[i][1]-'0')*100+
            (privacies[i][2]-'0')*10+(privacies[i][3]-'0');
        int todaymonth=(privacies[i][5]-'0')*10+(privacies[i][6]-'0');
        int todayday=(privacies[i][8]-'0')*10+(privacies[i][9]-'0');
        
        if(lastday[0]>todayyear)
        {
            answer.push_back(i+1);
            continue;
        }
        else if(lastday[0]<todayyear)
        {
            continue;
        }
        if(lastday[1]>todaymonth)
        {
            answer.push_back(i+1);
            continue;
        }
        else if(lastday[1]<todaymonth)
        {
            continue;
        }
        if(lastday[2]>=todayday)
        {
            answer.push_back(i+1);
            continue;
        }
        else
        {
            continue;
        }
        
    }
    
    
    return answer;
}