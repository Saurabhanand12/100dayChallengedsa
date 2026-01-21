#include<iostream>
using namespace std;

class node{
    public:
    int data ;
    node* next;
    
    node(int val){
        data = val;
        next = NULL;
    }
};

class CircularLinkedlist{
    public:
    node* head;
    node* tail;
    CircularLinkedlist(){
        head = tail = NULL;
    }

    void insertathead(int val ){
        node* newnode = new node(val);

        if(head == NULL){          //same tail = NULL
            head = tail = newnode;
            tail->next = head;
        }
        else{
            newnode->next = head;
            head = newnode;
            tail ->next = head;
        }
    }

    void insertattail(int val){
        node* newnode = new node(val);

        if(head == NULL){          //same tail = NULL
            head = tail = newnode;
            tail->next = head;
        }
        else{
            newnode->next = head;
            tail->next = newnode;
            tail = newnode;
        }
    }

    void deleteathead(){
        if(head == NULL) return ;
        else if(head == tail){
            delete head;
            head = tail = NULL;
        }
        else{
            node* temp = head;
            head = head->next;
            tail->next = head;

            temp->next = NULL;
            delete temp;
        }
    }

    void deleteattail(){
       if(head == NULL) return ;
        else if(head == tail){
            delete head;
            head = tail = NULL;
        }
        else{
            node* temp = tail;

            node* prev = head;
            while(prev->next != tail){
                prev = prev->next;
            }
 
            tail = prev;
            tail->next = head;
            
            temp->next = NULL;
            delete temp;
        } 
    }

    void display(){
        if(head == NULL) return ;

        cout<<head->data<<"->";
        node* temp = head->next;

        while(temp != head){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<temp->data<<endl;
    }

};

int main() {
    CircularLinkedlist cl;
    cl.insertathead(10);
    cl.insertathead(12);
    cl.insertathead(15);

    cl.display();

    cl.insertattail(20);
    cl.insertattail(25);

    cl.display();

    cl.deleteathead();
    cl.display();

    cl.deleteattail();
    cl.display();

return 0;
}