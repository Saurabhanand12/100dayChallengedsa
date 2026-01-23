// // NEXT GREATHER ELEMENT
// #include<iostream>
// #include<stack>
// using namespace std;

// int main() {
//     int arr[] ={2,1,5,6,2,3};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     stack<int> st;
//     int nge[n];
//     nge[n-1] = -1;
//     st.push(arr[n-1]);                                  // tc= O(n) = sp

//     for(int i= n-1;i>=0;i--){

//         while(st.size() > 0 && st.top() <= arr[i] ) st.pop();   //pop the stack element

//         if(st.size()==0) nge[i] = -1;   //  push value on answer array
//         else  nge[i] = st.top();

//         st.push(arr[i]);   //push arr ele in stack
//     }

//     for(int i=0;i<n;i++){
//         cout<<nge[i]<<" ";
//     }
// return 0;
// }

//// PREVIOUS GREATHER ELEMENT

// #include<iostream>
// #include<stack>
// using namespace std;

// int main() {
//     int arr[] ={2,1,5,6,2,3};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     stack<int> st;
//     int nge[n];
//     nge[0] = -1;
//     st.push(arr[0]);                                  // tc= O(n) = sp

//     for(int i=1;i<n;i++){

//         while(st.size() > 0 && st.top() <= arr[i] ) st.pop();   //pop the stack element

//         if(st.size()==0) nge[i] = -1;   //  push value on answer array
//         else  nge[i] = st.top();

//         st.push(arr[i]);   //push arr ele in stack
//     }

//     for(int i=0;i<n;i++){
//         cout<<nge[i]<<" ";
//     }
// return 0;
// }