#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    
    for(int i=0;i<arr1.size();i++)
    {
        vector<int> buffer;
        for(int j=0;j<arr2[0].size();j++)
        {
            //00*00+01*10, 00*01+01*11
            int intbuffer=0;
            for(int k=0;k<arr1[0].size();k++)
            {
                intbuffer+=arr1[i][k]*arr2[k][j];
            }
            buffer.push_back(intbuffer);
        }
        answer.push_back(buffer);
    }
    
    
    
    return answer;
}