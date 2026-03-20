#include<iostream>
#include<queue>
using namespace std;

int main() {
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(10);
    pq.push(5);            
    pq.push(90);               
    pq.push(-10);             
    pq.push(8);  

    while(pq.size()>0){
        cout<<pq.top()<<" ";
        pq.pop();
    }

return 0;
}