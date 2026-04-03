#include<iostream>
#include<queue>
#include<vector>
#include<list>
using namespace std;

vector<list<int>> graph;
int v;

void add_edges(int s,int d,bool bi_dir = true){
    graph[s].push_back(d);
    if(bi_dir)  graph[d].push_back(s);
}

void bfs(int src){
    int n = graph.size();
    queue<int> q;
    vector<bool> vis(n,false);

    q.push(src);
    vis[src] = true;

    while(!q.empty()){
        int u = q.front();
        q.pop();

        cout<<u<<" ";

        for(int neigh : graph[u]){
            if(vis[neigh] == false){
                vis[neigh] = true;
                q.push(neigh);
            }
        }
    }
}

int main(){
    cout<<"Enter Vertex : "<<" ";
    cin>>v;
    graph.resize(v,list<int>());
    int e;
    cout<<"Enter Edge : "<<" ";
    cin>>e;
    while(e--){
        int s,d;
        cout<<"Enter Source and Destination : "<< " ";
        cin>> s>> d;
        add_edges(s,d);
    }
    int src ;
    cout<<"Enter Source Value : "<<" ";
    cin>> src;

    bfs(src);

    return 0;
}