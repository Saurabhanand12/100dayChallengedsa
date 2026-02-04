#include<iostream>
#include<climits>
using namespace std;

void findmax(int arr[],int n,int max,int idx){
    if(idx == n){
        cout<<"Maximum value is : "<< max << endl;
        return;
    }

    if(arr[idx] > max) max = arr[idx];
    findmax(arr,n,max,idx+1);
}

int main() {

int arr[]= {12,3,4,5,66,77,9,9,44,22,88};
int n = sizeof(arr) /sizeof(arr[0]);

int max = INT_MIN;

findmax(arr,n,max,0);
return 0;
}