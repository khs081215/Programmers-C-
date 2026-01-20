using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    int cnt=0;
    for(int i=1;i<=count;i++)
    {
        cnt+=i;
    }
    answer=(long long)cnt*(long long)price;
    answer=answer-money;
    if(answer<0) answer=0;
    return answer;
}