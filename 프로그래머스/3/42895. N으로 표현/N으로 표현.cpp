#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

//n, nn, nnn을 먼저 찾기


int solution(int N, int number) {
    int answer = 0;
    vector<unordered_set<int>> memo;
    int num = N;

    for (int i = 0; i < 8; i++)
    {
        memo.push_back({});
        if (num == number) return i + 1;
        memo[i].insert(num);
        num = num * 10 + N;
    }
    for (int i = 1; i < 8; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            for (auto& left : memo[j])
            {
                for (auto& right : memo[i - j - 1])
                {
                    if (left + right == number) return i + 1;
                    memo[i].insert(left + right);
                    if (left - right == number) return i + 1;
                    memo[i].insert(left - right);
                    if (left * right == number) return i + 1;
                    memo[i].insert(left * right);
                    if (right!=0&&left / right == number) return i + 1;
                    if(right!=0)memo[i].insert(left / right);

                }
            }
        }
    }



    return -1;
}