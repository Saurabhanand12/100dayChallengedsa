// #include<iostream>
// using namespace std;

// class Queue{
// public:
//     int f, b, s;
//     int arr[5];

//     Queue(){
//         f = 0;
//         b = 0;
//         s = 0;
//     }

//     void push(int val){
//         if(b == 5){
//             cout << "Queue is Overflow" << endl;
//             return;
//         }
//         arr[b] = val;
//         b++;
//         s++;
//     }

//     void pop(){
//         if(s == 0){
//             cout << "Queue is Underflow" << endl;
//             return;
//         }
//         f++;
//         s--;
//     }

//     int front(){
//         if(s == 0) return -1;
//         return arr[f];
//     }

//     int back(){
//         if(s == 0) return -1;
//         return arr[b-1];
//     }

//     int size(){
//         return s;
//     }

//     bool isEmpty(){
//         return s == 0;
//     }

//     void display(){
//         for(int i = f; i < b; i++){
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// };

// int main(){
//     Queue q;
    // q.push(100);
    // q.push(200);
    // q.push(300);

    // q.display();

    // q.pop();
    // q.display();

    // cout << q.size() << endl;
    // cout << q.isEmpty() << endl;
    // cout << q.front() << endl;
    // cout << q.back() << endl;

//     return 0;
// }

/////////////////////////////////////////////////////////////
// Implementation using Linked list
#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next;
    node(int data){
        this->data = data;
        next = NULL;
    }
};

class Queue{
public:
    node* head;
    node* tail;
    int size;

    Queue(){
        head = tail = NULL;
        size = 0;
    }

    void push(int data){
        node* temp = new node(data);

        if(size == 0){
            head = tail = temp;
        } else {
            tail->next = temp;   // add at tail
            tail = temp;
        }
        size++;
    }

    void pop(){
        if(size == 0){
            cout << "Queue is empty\n";
            return;
        }

        node* temp = head;
        head = head->next;
        delete temp;
        size--;

        if(size == 0) tail = NULL;
    }

    int front(){
        if(size == 0) return -1;
        return head->data;
    }

    int back(){
        if(size == 0) return -1;
        return tail->data;
    }

    int sizequeue(){
        return size;
    }

    bool empty(){
        return size == 0;
    }

    void display(){
        node* temp = head;
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main(){
    Queue q;
    q.push(100);
    q.push(200);
    q.push(300);

    q.display();   // 100 200 300

    q.pop();
    q.display();   // 200 300

    cout << q.sizequeue() << endl;
    cout << q.empty() << endl;
    cout << q.front() << endl;
    cout << q.back() << endl;

    return 0;
}
