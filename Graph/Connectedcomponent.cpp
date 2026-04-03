#include<iostream>
#include<unordered_set>
#include<vector>
#include<list>

using namespace std;
vector<list<int>> graph;
int v;

void add_edges(int src,int dis , bool bi_dir = true){
    graph[src].push_back(dis);
    if(bi_dir) graph[dis].push_back(src);
}

void dfs(int node,unordered_set<int>& vis){
    vis.insert(node);
    for(auto neigh : graph[node]){
        if(not vis.count(neigh)){
            dfs(neigh,vis);
        }
    }
}

int connected_component(){
    int result =0;
    unordered_set<int> vis;
    for(int i=0;i<v;i++){
        if(vis.count(i) == 0){
            result++;
            dfs(i,vis);
        }
    }
    return result;
}

int main(){
    cout<<"Enter Number of vertex : "<<" ";
    cin>> v;
    graph.resize(v,list<int> ());
    int e;
    cout<<"Enter Number of Edges : "<<" ";
    cin>>e;
    while(e--){
        int s,d;
        cout<<"Enter Source and Destinaiton :  "<<" ";
        cin>> s >> d;
        add_edges(s,d,false);
    }
    cout<<connected_component()<<endl;

    return 0;
}