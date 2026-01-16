#include <string>
#include <vector>
#include <queue>
#include <functional>


using namespace std;
/*
맵에다 넣고 첫 키값이 K보다 크면 끝
아닐경우 0 1값을 계산후 push, 기존 0 1 값 삭제
반복


*/
int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<long long,vector<long long>,greater<long long>> pq;

    for(int i=0;i<scoville.size();i++)
    {
        pq.push(scoville[i]);
    }
    
    
    while(true)
    {
        bool isbreak=false;
        //합친 크기가 1과 같아질경우 break
        if(pq.size()==1){
            break;
        } 
        //제일 작은 스코빌이 K보다 클 경우 break
        if(pq.top()>=K) break;
        
        long long min=pq.top();
        pq.pop();
        long long submin=pq.top();
        pq.pop();
        pq.push(min+submin*2);
        
        answer++;
    }
    //smap의 크기가 1이고, K이상이 아닐 경우
    if(pq.size()==1)
    {
       if(pq.top()<K) return -1;
    }
    return answer;
}