#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

//앞에서 부터 3+1, 1+3, 2+2
// 5개는 4+1, 2+3, 3+2, 1+4
// 최대 최소값 저장

//memo[]
unordered_map<int, unordered_map<int, pair<int, int>>> memo;
int stringtoint(string& str)
{
    int answer=0;
    for(int i=0;i<str.length();i++)
    {
        answer=answer*10+(str[i]-'0');
    }
    return answer;
}


pair<int, int> calculate(int start, int count, vector<string>& arr)
{
    //숫자 1개면 리턴
    if (count == 1) return { stringtoint(arr[start]),stringtoint(arr[start]) };
    //메모에 있으면 리턴
    
    if (memo.find(start) != memo.end())
    {
        if (memo[start].find(count) != memo[start].end())
        {
            return memo[start][count];
        }
    }
    
    //연산
   //1,count-1  2, count-2 .....
    int min, max;
    for (int i = 1; i < count; i++)
    {
        pair<int, int> lftbuff, rgtbuff;
        lftbuff = calculate(start, i, arr);
        rgtbuff = calculate(start + (i - 1) * 2 + 2, count - i, arr);
        int lftmin = lftbuff.first;
        int lftmax = lftbuff.second;
        int rgtmin = rgtbuff.first;
        int rgtmax = rgtbuff.second;
        int submin, submax;
        if (arr[start + (i - 1) * 2 + 1][0] == '+')
        {
            submin = lftmin + rgtmin;
            submax = lftmax + rgtmax;
        }
        else
        {
            submin = lftmin - rgtmax;
            submax = lftmax - rgtmin;
        }
        //min, max 초기값
        if (i == 1)
        {
            min = submin;
            max = submax;
        }
        else
        {
            min = min < submin ? min : submin;
            max = max > submax ? max : submax;
        }
    }
    memo[start][count] = { min,max };
    return memo[start][count];
}


int solution(vector<string> arr)
{
    int answer = -1;
    answer = calculate(0, (arr.size()+1)/2, arr).second;
    return answer;
}