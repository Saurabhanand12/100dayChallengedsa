#include<iostream>
#include<stack>
using namespace std;

int main() {
    int arr[] ={6,8,0,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    stack<int> st;
    int sge[n];
    sge[0] = 1;
    st.push(arr[0]);                                  // tc= O(n) = sp

    for(int i=1;i<n;i++){

        while(st.size() > 0 && arr[st.top()] <= arr[i] ) st.pop();   //pop the stack element

        if(st.size()==0) sge[i] = -1;   //  push value on answer array
        else  sge[i] = st.top();

        sge[i] = i - sge[i];

        st.push(i);   //push arr ele in stack
    }

    for(int i=0;i<n;i++){
        cout<<sge[i]<<" ";
    }
return 0;
}