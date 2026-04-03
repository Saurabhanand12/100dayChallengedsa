// #include<iostream> 
// #include<vector> 
// #include<list>
// using namespace std;

// vector<list<int>> graph;
// int v;   // Number of Vertices

// void add_edge(int s, int d,bool bi_dir = true){
//     graph[s].push_back(d);
//     if(bi_dir == true){
//         graph[d].push_back(s);
//     }
// }

// void display(){
//     for(int i =0;i<graph.size();i++){
//         cout<<i<<"->"<< " ";
//         for(auto ele : graph[i]){
//             cout<< ele << ",";
//         }
//         cout<<endl;
//     }
// }


// int main(){
//     cout<< "Enter Number of Vertices : "<< " ";
//     cin>> v;
//     graph.resize(v,list<int>());
//     int e;
//     cout<<"Enter Edges :"<<" ";
//     cin>> e;
//     while(e--){
//         int s,d;
//         cout<<"Enter Source and Destination"<<" ";
//         cin>> s>>d;
//         add_edge(s,d);
//     }
//     display();

//     return 0;
// }

// for weighted Graph

// #include<iostream> 
// #include<vector> 
// #include<list>
// using namespace std;

// vector<list<pair<int,int>>> graph;
// int v;   // Number of Vertices

// void add_edge(int s, int d,int wt,bool bi_dir = true){
//     graph[s].push_back({d,wt});
//     if(bi_dir == true){
//         graph[d].push_back({s,wt});
//     }
// }

// void display(){
//     for(int i =0;i<graph.size();i++){
//         cout<<i<<"->"<< " ";
//         for(auto ele : graph[i]){
//             cout<<"("<<ele.first << ","<<ele.second<<")";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     cout<< "Enter Number of Vertices : "<< " ";
//     cin>> v;
//     graph.resize(v,list<pair<int,int>>());
//     int e;
//     cout<<"Enter Edges :"<<" ";
//     cin>> e;
//     while(e--){
//         int s,d,wt;
//         cout<<"Enter Source and Destination and weight "<<" ";
//         cin>> s>>d >> wt;
//         add_edge(s,d,wt);
//     }
//     display();

//     return 0;
// }

// using map 
#include<iostream> 
#include<vector> 
#include<unordered_map>
using namespace std;

vector<unordered_map<int,int>> graph;
int v;   // Number of Vertices

void add_edge(int s, int d,int wt,bool bi_dir = true){
    graph[s][d] = wt;
    if(bi_dir == true){
        graph[d][s] =  wt;
    }
}

void display(){
    for(int i =0;i<graph.size();i++){
        cout<<i<<"->"<< " ";
        for(auto ele : graph[i]){
            cout<<"("<<ele.first << ","<<ele.second<<")";
        }
        cout<<endl;
    }
}

int main(){
    cout<< "Enter Number of Vertices : "<< " ";
    cin>> v;
    graph.resize(v,unordered_map<int,int> ());
    int e;
    cout<<"Enter Edges :"<<" ";
    cin>> e;
    while(e--){
        int s,d,wt;
        cout<<"Enter Source and Destination and weight "<<" ";
        cin>> s>>d >> wt;
        add_edge(s,d,wt);
    }
    display();

    return 0;
}