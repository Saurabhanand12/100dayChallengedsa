// #include<iostream>
// #include<queue>
// using namespace std;

// void display(queue<int>& q){
//     for(int i=0;i<q.size();i++){
//         int x = q.front();
//         cout<<x<<" ";
//         q.pop();
//         q.push(x);
//     }
//     cout<<endl;
// }

// int main() {
//     queue<int> q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);

//     display(q);

//     q.pop();

//     display(q);

// return 0;
// }

//////////////////////////////////////////////////////////
// Reverse a Queue
// #include<iostream>
// #include<queue>
// #include<stack>
// using namespace std;

// void display(queue<int>& q){
//     for(int i=0;i<q.size();i++){
//         int x = q.front();
//         cout<<x<<" ";
//         q.pop();
//         q.push(x);
//     }
//     cout<<endl;
// }

// void Reverseq(queue<int>& q){
//     stack<int> st;
//     while(q.size() > 0){
//         int x = q.front();
//         q.pop();
//         st.push(x);
//     }

//     while(st.size() > 0){
//         q.push(st.top());
//         st.pop();
//     }
// }

// int main() {
//     queue<int> q;

//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     q.push(60);

//     display(q);
     
//     Reverseq(q);

//     display(q);

// return 0;
// }

////////////////////////////////////////////////////////
// Remove at even 
#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void display(queue<int>& q){
    for(int i=0;i<q.size();i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}

void Removeateven(queue<int>& q){
    int n = q.size();
    for(int i=0;i<n;i++){
        if(i % 2 == 0) q.pop();
        else{
            int x = q.front();
            q.pop();
            q.push(x);
        }
    }
}

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    display(q);
     
    Removeateven(q);

    display(q);

    cout<<q.back()<<endl;
    cout<<q.empty();
return 0;
}