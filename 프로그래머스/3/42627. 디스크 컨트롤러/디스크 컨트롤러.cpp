#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <functional>

using namespace std;

bool comp(vector<int>& a, vector<int>& b)
{
    if(a[0]<b[0]) return true;
    return false;
}

struct cmp {
  bool operator()(vector<int>& a, vector<int>& b){
    if(a[1]>b[1]) return true;
    else if(a[1]<b[1]) return false;
    if(a[0]>b[0]) return true;
    else if(a[0]<b[0]) return false;
    if(a[2]>b[2]) return true;
    return false;
  }
};



int solution(vector<vector<int>> jobs) {
    int answer = 0;
    int second = 0;
    int nowhere = 0;
    priority_queue<vector<int>, vector<vector<int>>, cmp> pq;
    sort(jobs.begin(), jobs.end(), comp);
    int i;
    while (true)
    {
        if (pq.empty() && nowhere == jobs.size()) break;
        for (i = nowhere; i < jobs.size(); i++)
        {
            if (second >= jobs[i][0]) pq.push({ jobs[i][0],jobs[i][1],i });
            else break;
        }
        nowhere = i;
        if (pq.size()==0&&nowhere<jobs.size())
        {
            second = jobs[nowhere][0];
            continue;
        }
        second += pq.top()[1];
        answer += second - pq.top()[0];
        pq.pop();
    }

    return answer / jobs.size();
}