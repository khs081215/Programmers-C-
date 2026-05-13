#include <bits/stdc++.h>

using namespace std;

bool comp(const string &a, const string &b) {
    return a + b > b + a;
}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> temp;

    for (int num : numbers) {
        temp.push_back(to_string(num));
    }

    sort(temp.begin(), temp.end(), comp);

    for (string s : temp) {
        answer += s;
    }

    if (answer[0] == '0') return "0";

    return answer;
}