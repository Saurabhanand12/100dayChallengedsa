// #include<iostream> 
// using namespace std;

// int main(){
//     int arr[] = {2,3,5,6,7,8,11,13,115,555,7777};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int target = 55;

//     for(int i=0;i<n;i++){
//         if(arr[i] == target){
//             cout<<i<<endl;
//             return 0;
//         }
//     }
//     cout<<"Value is not Present";
//     return 0;
// }

//////////////////////////////////////////////
// #include<iostream> 
// using namespace std;

// int main(){
//     int arr[] = {2,3,5,6,7,8,11,13,115,555,7777};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int target = 55;

//     bool flag = false;
//     for(int i=0;i<n;i++){
//         if(arr[i] == target){
//             flag = true;
//         }
//     }
//     if(flag == true ) cout<<"Element is Present"<<endl;
//     else cout<<"Element is not Present"<<endl;
//     return 0;
// }

///////////////////////////////////////////////////////////////
//  check upper bound and lower bound 

#include<iostream> 
using namespace std;

int main(){
    int arr[] = {2,33,44,55,66,77,88,99,111,12222};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target;
    cout<<"Enter Target Value :"<<" ";
    cin>> target;

    for(int i=0;i<n;i++){
        if(arr[i] > target){
            cout<<"Lower bound of target is : "<<arr[i-1]<<endl;
            break;
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i] > target){
            cout<<"Upper bound of target is : "<<arr[i]<<endl;
            break;
        }
    }
}