// #include<iostream>
// using namespace std;

// class node{
//     public:
//     int data;
//     node* next;
//     node* prev;
//     node(int data){
//         this->data = data ;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };
// class Deque{
//     public:
//     node* head;
//     node* tail;
//     int size;
//     Deque(){
//         head = tail = NULL;
//         size = 0;
//     }

//     void pushback(int data ){
//         node* temp = new node(data);
//         if(size == 0) head = tail = temp;
//         else{
//             tail->next = temp;
//             temp->prev = tail;
//             tail = temp;
//         }
//         size++;
//     }

//     void pushfront(int data){
//         node* temp = new node(data);
//         if(size == 0 ) head = tail = NULL;
//         else{
//             temp->next = head;
//             head -> prev = temp;
//             head = temp;
//         }
//         size++;
//     }

//     void popfront(){
//         if(size ==0 ){
//             cout<<"Deque is Empty"<<endl;
//             return;
//         }
//         else{
//             head = head ->next;
//             if(head) head->prev=NULL;
//             if(head == NULL) tail = NULL;
//         }
//         size--;
//     }

//     void popback(){
//         if(size == 0 ){
//             cout<<"Deque is Empty "<<endl;
//         }
//         else if(size == 1){
//             popfront();
//             return;
//         }
//         node* temp = tail;       // store last node
//         tail = tail->prev;       // move tail backward
//         tail->next = NULL;       // detach last node
//         delete temp;             // free memory
//         size--;
//     }

//     int front(){
//         if(size == 0 ){
//             cout<<"Deque is Empty "<<endl;
//             return -1;
//         }
//         return head->data;
//     }

//     int back(){
//         if(size == 0 ){
//             cout<<"Deque is Empty "<<endl;
//             return -1;
//         }
//         return tail->data;
//     }

//     int sizedq(){
//         return size;
//     }

//     bool empty(){
//         if(size == 0 ) return true;
//         return false;
//     }

//     void display(){
//         node* temp = head;
//         while(temp != NULL){
//             cout<<temp->data<<" ";
//             temp = temp->next;
//         }
//         cout<<endl;
//     }
// };

// int main() {
//     Deque dq;
//     dq.pushback(20);
//     dq.pushfront(10);
//     dq.display();
//     dq.pushback(30);
//     dq.pushfront(40);

//     dq.display();

//     dq.popback();
//     dq.display();
//     dq.popfront();
//     dq.display();

//     cout<<dq.front()<<endl;

//     cout<<dq.back()<<endl;

//     cout<<dq.sizedq()<<endl;

//     cout<<dq.empty();

// return 0;
// }

////////////////////////////////////////////////

// in_Build Deque 
#include<iostream>
#include<deque>
using namespace std;

void display(deque<int>& dq){
    for(int ele : dq){
        cout<<ele<<" ";
    }
    cout<<endl;
}

int main() {
    deque<int> dq;
    dq.push_back(20);
    dq.push_front(10);
    display(dq);
    dq.push_back(30);
    dq.push_front(40);

    display(dq);

    dq.pop_back();
    display(dq);
    dq.pop_front();
    display(dq);

    cout<<dq.front()<<endl;

    cout<<dq.back()<<endl;

    cout<<dq.size()<<endl;

    cout<<dq.empty();

return 0;
}