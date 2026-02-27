#include<iostream>
#include<unordered_set>
using namespace std;

int main() {
    unordered_set<int> st;
    st.insert(10);
    st.insert(20);
    st.insert(30);
    st.insert(40);

    cout<<"Total size of set is : "<<st.size()<<endl;

    st.erase(40);
    cout<<"Total size of set is : "<<st.size()<<endl;

    int target = 30;
    if(st.find(target) != st.end()){
        cout<<"Element are Exists"<<endl;
    }
    else{
        cout<<"Element are not Exist"<<endl;
    }

    for(int ele : st){
        cout<<ele<<" ";
    }
    cout<<endl;
return 0;
}