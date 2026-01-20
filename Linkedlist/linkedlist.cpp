// linked class   Complete all the Operations 

#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data = data ;
        this->next = NULL;
    }
};

class Linkedlist{
    public:
    node* head;
    node* tail;
    int size;
    Linkedlist(){
        head = tail = NULL;
        size = 0;
    }

    void insertattail(int data ){
        node* temp = new node(data);
        if(size == 0 ) head = tail = temp;         // tc / sp = O(1)
        else{
            tail -> next = temp;
            tail = temp;
        }
        size++;
    }

    void insertathead(int data ){
        node* temp = new node(data);            // tc / sp = O(1)
        if(size == 0 ) head = tail = temp;
        else{
            temp->next = head ;
            head =  temp;
        }
        size++;
    }
    
    void insertatindex(int idx , int data ){
        if( idx <  0 || idx > size) cout<<"Invalid Output"<<endl;
        else if(idx ==  0 ) insertathead(data);                   // TC = O(n), SC = O(1)
        else if(idx == size ) insertattail(data);
        else{
            node* newnode = new node(data);
            node* temp = head;
            for(int i = 0 ; i<idx-1 ;i++){
                temp = temp->next;
            }

            newnode->next = temp->next;
            temp->next = newnode;
        }
        size++;
    }

    void getatindex(int idx){
        if(idx < 0 || idx > size) cout<< "Invalid Input"<< endl;            // TC = O(n), SC = O(1)
        else if( idx == 0 ) cout << head->data << endl;
        else if( idx == size) cout << tail->data << endl;
        else{
            node* temp = head ;
            for(int i=1;i<=idx;i++){
                temp = temp->next;
            }
            cout<<"Value of index is : "<<temp->data<<endl;
        }
    }

    void deleteathead(){
        if(size == 0 ) cout<<"Linked list is empty "<<endl;

        node* temp  = head ;                                              // TC = O(n), SC = O(1)
        head  = head->next;
        temp->next = NULL ;

        size--;

        delete temp;
    }

    void deleteattail(){
        if(size == 0) cout<<"Linked list is Empty "<< endl;

        node* temp = head ;
        while(temp->next != tail ){                           // Tc = O(n)  SP= O(1)
            temp = temp->next;
        }

        temp->next = NULL;
        delete tail;
        tail = temp;

        size--;
    }

    void deleteatindex(int idx){
        if(size == 0 ) cout<<"Linked list is Empty "<<endl;
        else if(idx < 0 || idx > size ) cout<<"Index is out of Range "<<endl;
        else if(idx == 0 ) deleteathead();
        else if(idx == size) deleteattail();
        else{                                                        // Tc = O(n)  SP= O(1)
            node* temp = head;
            for(int i=1;i<=idx-1;i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }

    node* deletetargetednode(int target){
        if( head->data == target){
            head = head->next;
            return head;
        }
        node* temp = head ;
        while(temp->next->data != target){                          // Tc = O(n)  SP= O(1)
            temp = temp->next;
        }
        temp->next = temp->next->next;
        size--;
    }

    void display(){
        node* temp = head;
        while( temp != NULL ){
            cout<< temp->data <<" ";                        //tc = O(n)  sp= O(1);
            temp = temp->next;
        }
        cout<< endl;
    }
};

int main(){
   Linkedlist ll;
   ll.insertattail(20);
   ll.insertattail(30);
   ll.insertattail(40);
   ll.insertattail(80);
   ll.insertattail(90);
   ll.insertattail(60);
   ll.display();
   ll.insertattail(60);
   ll.display();
   ll.insertathead(10);
   ll.display();
   ll.insertatindex(4,50);
   ll.display();

   cout<< ll.size<<endl;

   ll.getatindex(6);

   ll.deleteathead();
   cout<< ll.size<<endl;
   ll.display();

   ll.deleteattail();
   cout<< ll.size<<endl;
   ll.display();

   ll.deleteatindex(2);
   cout<< ll.size<<endl;
   ll.display();

   ll.deletetargetednode(60);
   cout<< ll.size<<endl;
   ll.display();

}