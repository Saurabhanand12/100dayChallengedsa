#include<iostream>
using namespace std;

void printrev(int arr[],int n,int idx){
    if(idx == n){
        return;
    }
    cout<<arr[idx]<<" ";
    printrev(arr,n,idx+1);
}

int main() {
int arr[] = {1,2,3,4,5,3,43,234,4,4,3,4,43,3,888};
int n = sizeof(arr)/sizeof(arr[0]);

printrev(arr,n,0);
return 0;
}