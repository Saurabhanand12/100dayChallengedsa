#include<iostream>
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

node* insert(node* root,int val){
    if(root == NULL) return new node(val);

    if(val > root->val) root->right = insert(root->right,val);
    else root->left = insert(root->left,val);

    return root;
}

// Find predecessor (max in left subtree)
node* predecessor(node* root){
    if(root == NULL || root->left == NULL) return NULL;

    node* pred = root->left;
    while(pred->right != NULL){
        pred = pred->right;
    }
    return pred;
}

// Find successor (min in right subtree)
node* successor(node* root){
    if(root == NULL || root->right == NULL) return NULL;

    node* succ = root->right;
    while(succ->left != NULL){
        succ = succ->left;
    }
    return succ;
}

int main(){
    node* root = NULL;

    root = insert(root,20);
    root = insert(root,10);
    root = insert(root,30);
    root = insert(root,5);
    root = insert(root,15);
    root = insert(root,25);
    root = insert(root,35);

    node* pred = predecessor(root);
    node* succ = successor(root);

    if(pred) cout << "Predecessor: " << pred->val << endl;
    else cout << "No predecessor\n";

    if(succ) cout << "Successor: " << succ->val << endl;
    else cout << "No successor\n";

    return 0;
}