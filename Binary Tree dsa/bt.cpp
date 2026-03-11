#include<iostream>
#include<climits>
using namespace std;

class node{
public:
    int val;
    node* left;
    node* right;
    node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

int sum(node* root){
    if(root == NULL) return 0;
    return root->val + sum(root->left) + sum(root->right);
}
int size(node* root){
    if(root == NULL) return 0;
    return 1 + size(root->left) + size(root->right);
}

void display(node* root){
    if(root == NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}

int maxp(node* root){
    if(root == NULL) return INT_MIN;
    int maxleft = maxp(root->left);
    int maxright = maxp(root->right);
    return max(root->val,max(maxleft,maxright));
}
int level(node* root){
    if(root == NULL) return 0;
    return 1 + max(level(root->left),level(root->right));
}
int main() {
    node* a = new node(1);
    node* b = new node(2);
    node* c = new node(3);
    node* d = new node(4);
    node* e = new node(5);
    node* f = new node(6);
    node* g = new node(7);
    node* h = new node(8);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    d->left = h;

    display(a);
    cout<<endl;

    cout<<"Sum of Tree is : "<<sum(a)<<endl;
    cout<<"Size of Tree is : "<<size(a)<<endl;
    cout<<"Maximum Element in the Tree is : "<<maxp(a)<<endl;
    cout<<"Level in the Tree is : "<<level(a)<<endl;

return 0;
}