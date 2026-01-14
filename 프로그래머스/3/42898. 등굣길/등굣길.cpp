#include <string>
#include <vector>

using namespace std;
/*
경로 자체는 m+n-2개.
(m+n-2)C(m-1)
(m+n-2)!/((m-1)!*(n-1)!) 이 총 개수인데
*/


long long calculate(vector<vector<int>>& puddles, long (*memo)[100], int nowx, int nowy)
{
    //물에 잠겼으면 0 리턴
    if (memo[nowx - 1][nowy - 1] == -1) return 0;
    //메모가 있으면 리턴
    if (memo[nowx - 1][nowy - 1] != 0) return memo[nowx - 1][nowy - 1];
    //1,x  x,1지역 처리
    if(nowx==1)
    {
        memo[nowx-1][nowy-1]=calculate(puddles, memo, nowx, nowy-1);
        return memo[nowx-1][nowy-1];
    }
    if(nowy==1) 
    {
        memo[nowx-1][nowy-1]=calculate(puddles, memo, nowx-1, nowy);
        return memo[nowx-1][nowy-1];
    }
    
    //계산
    memo[nowx - 1][nowy - 1] =
        (calculate(puddles, memo, nowx - 1, nowy)% 1000000007)+
        (calculate(puddles, memo, nowx, nowy - 1)%1000000007);
    memo[nowx-1][nowy-1]=memo[nowx-1][nowy-1]%1000000007;
    return memo[nowx - 1][nowy - 1];
}



int solution(int m, int n, vector<vector<int>> puddles) {
    long long answer = 0;
    long memo[100][100] = { 0, };

    for (int i = 0; i < puddles.size(); i++)
    {
        memo[puddles[i][0] - 1][puddles[i][1] - 1] = -1;
    }

    memo[0][0]=1;
    answer = calculate(puddles, memo, m, n);




    return (int)(answer % (long long)1000000007);
}