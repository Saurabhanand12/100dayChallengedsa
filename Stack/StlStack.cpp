// #include<iostream>
// #include<stack>
// using namespace std;

// int main() {
//     stack<int> st;
//     st.push(10);
//     st.push(20);
//     st.push(30);          //with operations push, pop, top, isEmpty,size  tc=O(1)
//     st.push(40);
//     st.push(50);

//     cout<<st.size()<<endl;
//     cout<<st.top()<<endl;

//     st.pop();
//     cout<<st.top()<<endl;

//     stack<int> temp;
//     while(st.size() > 0){
//         cout<<st.top()<<" ";
//         temp.push(st.top());
//         st.pop();
//     }
//     cout<<endl;
    
//     while(temp.size() > 0){
//         cout<<temp.top()<<" ";
//         st.push(temp.top());
//         temp.pop();
//     }
//     cout<<endl;
// return 0;
// }


///reverse element of  a stack in a original stack 

// #include<iostream>
// #include<stack>
// using namespace std;

// int main() {
//     stack<int> st;
//     st.push(40);
//     st.push(34);
//     st.push(28);
//     st.push(20);
//     st.push(14);
//     st.push(8);

//     stack<int> temp1,temp2;
//     cout<<"Original Stack are : "<<" ";
//     while(st.size() > 0){
//         cout<<st.top()<<" ";
//         temp1.push(st.top());
//         st.pop();
//     }
//     cout<<endl;
//     while(temp1.size() > 0){
//         temp2.push(temp1.top());
//         temp1.pop();
//     }
//     cout<<"Reversed stack are : "<<" ";
//     while(temp2.size() > 0){
//         st.push(temp2.top());
//         temp2.pop();
//     }

//     while(st.size() >0){
//         cout<<st.top()<<" ";
//         temp1.push(st.top());
//         st.pop();
//     }

// return 0;
// }

//copy stack in another stack  in the same order 

#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<int> st1,st2;

    st1.push(60);
    st1.push(50);
    st1.push(40);
    st1.push(30);
    st1.push(20);
    st1.push(10);

    stack<int> temp;
    while(st1.size() > 0){
        cout<<st1.top()<<" ";
        temp.push(st1.top());
        st1.pop();
    }
    cout<<endl;
    while(temp.size() > 0){
        st2.push(temp.top());
        temp.pop();
    }
    
    while(st2.size() > 0){
        cout<<st2.top()<<" ";
        temp.push(st2.top());
        st2.pop();
    }


return 0;
}