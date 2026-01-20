#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

class ddl{
    public:
    node* head;
    node* tail;
    int size ;
    ddl(){
        head = tail = NULL;
        size = 0;
    }

    node* insertattail(int data ){
        node* newn = new node(data);
        node* temp = newn;
        if(size == 0 )  head = tail = temp;
        else{
            tail->next = temp;
            temp->prev = tail ;
            tail = temp;
            tail ->next = NULL;
        }
        size++;
    }

    node* insertathead(int data){
        node* newn = new node(data);
        node* temp = newn;
        if(size == 0 ) tail = head = temp;
        else{
            head->prev = temp;
            temp->next = head;
            head = temp;
        }
        size++;
    }

    node* insertatidx(int idx,int data){
        if(idx < 0 || idx > size) cout<<"Invalid index"<<" ";
        else if(idx == 0 ) insertathead(data);
        else if( idx == size) insertattail(data);
        else{
            node* newn = new node(data);
            node* temp = head;
            for(int i=1;i<idx-1;i++){
                temp = temp->next;
            }
            newn->next = temp->next;
            temp->next = newn;
            newn->prev = temp;
            temp->next->prev = newn;
        }
        size++;
    }

    node* deleteathead(){
        if(size == 0 ) cout<<"Linked list is Empty "<<" ";
        head = head->next;
        if(head != NULL ) head->prev=NULL;
        else tail = NULL;
        size--;
    }

    node* deleteattail(){
        if(size == 0 ) cout<<"Linked list is Empty "<<" ";
        else if( size == 1 ) deleteathead();
        node* temp = tail->prev;
        temp->next = NULL;
        tail = temp;
        size--;
    }

    node* deleteatindex(int idx){
        if(size == 0) cout<<"Linked list is empty " <<" ";
        else if(idx == 0 ) deleteathead();
        else if( idx == size) deleteattail();
        else{
            node* temp = head ;
            for(int i=1;i<idx-1;i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            temp->next->prev = temp;
        }
        size--;
    }


    void display(){
        node* temp = head;
        while( temp ){
            cout<<temp->data<<" -> "<<" ";
            temp= temp->next;
        }
        cout<<endl;
    }

};

int main(){

    ddl d1;
    d1.insertattail(20);
    d1.insertattail(30);

    d1.display();

    d1.insertathead(10);
    d1.insertathead(5);

    d1.display();

    d1.insertatidx(4,40);

    d1.display();

    d1.deleteathead();
    d1.display();

    d1.deleteattail();
    d1.display();

    d1.deleteatindex(2);
    d1.display();

    return 0;
}