// #include<iostream>
// using namespace std;

// int main() {
// int arr[] = {1,2,2,2,3,3,3,3,3,3,3,3,3,4,4,4,4,4,5};
// int n = sizeof(arr)/sizeof(arr[0]);
// int target = 4;

// int low = 0;
// int high = n-1;
// bool flag = false;
// while(low <= high ){
//     int mid = low + (high-low)/2;
//     if(arr[mid] == target){
//         if(arr[mid-1] != target){
//             flag = true;
//             cout<<"First occurence is : "<<mid<<endl;
//             return 0;
//         }
//         else{
//             high = mid-1;
//         }
//     }
//     else if(arr[mid] > target)  high = mid -1;
//     else  low = mid + 1;
// }
// if(flag == false){
//     cout<<"-1"<<endl;
// }
// return 0;
// }