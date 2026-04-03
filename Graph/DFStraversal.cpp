#include<iostream>
#include<vector>
#include<list>
#include<queue>

using namespace std;

vector<list<int>> graph;
int v;

void add_edges(int src ,int des, bool bi_dir = true){
    graph[src].push_back(des);
    if(bi_dir) graph[des].push_back(src);
}

void dfshelper(int src,vector<bool>& vis){
    cout<<src<<" ";
    vis[src] = true;

    for(int neigh : graph[src]){
        if(!vis[neigh]){
            dfshelper(neigh,vis);
        }
    }
}

void dfs(){
   int src =0;
   vector<bool> vis(graph.size(),false);

   dfshelper(src,vis);
}

int main(){
    cout<<"Enter vertex : "<<" ";
    cin>>v;
    graph.resize(v,list<int>());
    int e;
    cout<<"Enter Edges : "<< " ";
    cin>>e;

    while(e--){
        int s , d;
        cout<<" Enter Source and Destination : "<<" ";
        cin>> s >> d;
        add_edges(s,d);
    }

    dfs();
    
    return 0;
}