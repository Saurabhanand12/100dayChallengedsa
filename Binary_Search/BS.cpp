// #include<iostream> 
// using namespace std;
// int main(){
//     int arr[] = {1,2,33,55,77,99,122,133,144,155,166};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     int target;
//     cout<<"Enter the Target value : "<<" ";            // tc = O(log n) sc = o(1);
//     cin>>target;

//     int low = 0;
//     int high = n-1;
//     while(low <= high ){
//         int mid = low + (high - low ) / 2;
//         if(arr[mid] == target){
//             cout<<"Target value is Present at index :"<<mid<<" ";
//             return 0;
//         }
//         else if(arr[mid] > target) high = mid -1;
//         else low = mid + 1;
//     }
//     cout<<"Target value is not Present"<<endl;
//     return 0;
// }

///////////////////////////////////////////////////////
// #include<iostream> 
// using namespace std;
// int BinarySearch(int low , int high , int arr[],int target){
//     if(low > high)  return -1;
    
//     int mid = low + (high - low)/2;

//     if(arr[mid] == target)  return mid;
//     else if(arr[mid] > target) return BinarySearch(low, mid-1, arr, target);
//     else  return BinarySearch(mid+1, high, arr, target);
// }
// int main(){
//     int arr[] = {1,2,33,55,77,99,122,133,144,155,166};        // Recursive Way  tc = O(log n) == sc

//     int n = sizeof(arr)/sizeof(arr[0]);

//     int target;
//     cout<<"Enter the Target value : "<<" ";
//     cin>>target;

//     int result = BinarySearch(0, n-1, arr, target);

//     if(result != -1){
//         cout<<"Target present at index: "<<result;
//     }
//     else{
//         cout<<"Target not found";
//     }

//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////
// #include<iostream>
// using namespace std;

// int main() {
// int arr[] = {22,33,44,54,67,83,94,224};
// int n = sizeof(arr)/sizeof(arr[0]);

// int low = 0;
// int high = n-1;
// int target;
// cout<<"Enter the value of target :"<<endl;
// cin>> target;
                                                          
// bool flag = false;
// while(low <= high){                                               //for Lower  Bound
//     int mid = low +(high - low)/2;
//     if(arr[mid] == target){
//         flag = true;
//         cout<<arr[mid-1];
//         return 0;
//     }
//     else if(arr[mid] > target) high = mid -1;
//     else low = mid + 1;
// }
// if(flag == false) cout<<arr[high]<<endl;
// return 0;
// }

//////
#include<iostream>
using namespace std;

int main() {
int arr[] = {22,33,44,54,67,83,94,224};
int n = sizeof(arr)/sizeof(arr[0]);

int low = 0;
int high = n-1;
int target;
cout<<"Enter the value of target :"<<endl;                 // for upper bound 
cin>> target;

bool flag = false;
while(low <= high){
    int mid = low +(high - low)/2;
    if(arr[mid] == target){
        flag = true;
        cout<<arr[mid+1];
        return 0;
    }
    else if(arr[mid] > target) high = mid -1;
    else low = mid + 1;
}
if(flag == false) cout<<arr[low]<<endl;
return 0;
}