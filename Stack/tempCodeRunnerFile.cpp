#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<int> st;
    st.push(40);
    st.push(34);
    st.push(28);
    st.push(20);
    st.push(14);
    st.push(8);

    stack<int> temp1,temp2;
    cout<<"Original Stack are : "<<" ";
    while(st.size() > 0){
        cout<<st.top()<<" ";
        temp1.push(st.top());
        st.pop();
    }
    cout<<endl;
    while(temp1.size() > 0){
        temp2.push(temp1.top());
        temp1.pop();
    }
    cout<<"Reversed stack are : "<<" ";
    while(temp2.size() > 0){
        cout<<temp2.top()<<" ";
        st.push(temp2.top());
        temp2.pop();
    }

return 0;
}