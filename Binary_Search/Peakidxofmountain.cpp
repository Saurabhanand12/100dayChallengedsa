#include<iostream>
using namespace std;

int main() {
    int arr[] = {1,3,5,9,3,2,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    int low = 0;
    int high = n-2;
    while(low <= high ){
        int mid = low + (high - low)/2;
        if(arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1]){
            cout<< mid<< endl;
            return 0;
        }
        else if(arr[mid] > arr[mid-1]) low = mid +1; 
        else high = mid -1;
    }
    cout<< "No peak element is present"<<endl;

return 0;
}