// // Stack Implementation using vector 

// #include<iostream>
// #include<vector>
// using namespace std;

// class Stack{
//     public:
//     vector<int> v;

//     void push(int val){                         //tc = O(1)
//         v.push_back(val);
//     }

//     void pop(){                                     //tc = O(1)
//         if(v.size() == 0 ) cout<<"Stack is Empty "<<endl;

//         v.pop_back();
//     } 

//     void top(){                                     //tc = O(1)
//        if(v.size() == 0 ) cout<<"Stack is Empty "<<endl;
       
//        cout<< v[v.size()-1] << " ";   // v[last]
//     }

//     void size(){
//        cout<<v.size()<<endl;
//     }

//     bool empty(){
//         return v.size() == 0;
//     }
// };

// int main() {
//     Stack st;

//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);

//     st.pop();

//     st.top();

//     st.size();

//     cout<<st.empty()<<endl;

// return 0;
// }


//  Using a Linked list (built-in method /function)

#include<iostream>
#include<list>
using namespace std;

class Stack{
    public:
    list<int> ll;

    void push(int val){                         //tc = O(1)
        ll.push_front(val);
    }

    void pop(){                                     //tc = O(1)
        if(ll.size() == 0 ) cout<<"Stack is Empty "<<endl;

        ll.pop_front();
    } 

    void top(){                                     //tc = O(1)
       if(ll.size() == 0 ) cout<<"Stack is Empty "<<endl;
       
       cout<<ll.front()<<endl;
    }

    void size(){
       cout<<ll.size()<<endl;
    }

    bool empty(){
        return ll.size() == 0;
    }
};

int main() {
    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    st.pop();

    st.top();

    st.size();

    cout<<st.empty()<<endl;

return 0;
}
