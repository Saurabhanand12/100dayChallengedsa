#include<iostream> 
#include<queue>
using namespace std;

int main(){
    priority_queue<int> pq;  // MAX Heap
    pq.push(10);
    pq.push(20);
    pq.push(0);
    pq.push(-2);
    pq.push(22);
    pq.push(99);

    while(pq.size() > 0){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}