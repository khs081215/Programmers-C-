#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    int buffer=0;
    bool flag=false;
    for(int i=0;i<nums.size()-2;i++)
    {
        for(int j=i+1;j<nums.size()-1;j++)
        {
            for(int k=j+1;k<nums.size();k++)
            {
                buffer=nums[i]+nums[j]+nums[k];
                for(int l=2;l<buffer/2;l++)
                {
                    if(buffer%l==0)
                    {
                        flag=true;
                        break;
                    }
                }
                if(!flag) answer++;
                flag=false;
            }
        }
    }
    
    return answer;
}