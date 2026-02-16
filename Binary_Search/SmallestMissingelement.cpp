// #include<iostream>
// using namespace std;

// int main() {
//     int arr[] = {0,1,2,3,5,6,11,22};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     for(int i = 0;i<n;i++){
//         if(arr[i] == i) continue;
//         else{
//             cout<<"First Smallest Missing Element is : "<<i<< endl;
//             break;
//         }
//     }

// return 0;
// }

///////////////////////////////////////////////////////////
// #include<iostream>
// using namespace std;

// int main() {
//     int arr[] = {0,1,2,3,5,6,11,22};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     int ans;

//     int low = 0;
//     int high = n-1;
//     while(low <= high){
//         int mid = low+ (high- low)/2;
//         if(arr[mid]  == mid) low = mid+1;
//         else{
//             ans = mid;
//             high = mid -1;
//         }
//     }
//     cout<<"First Smallest Missing Element is : "<<ans<<endl;

// return 0;
// }