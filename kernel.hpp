#include "dincs.hpp"
#include<vector>
#include<iostream>
using namespace std;

void kernelFunction(Graph G){
    vector<pair<int,int>> edges;
    for(int u=G.V-1;u>=0;u--){
        for(int i=0;i<G.adj[u].size();i++){
            Edge e=G.adj[u][i];
            if(e.back==false)
                edges.push_back(make_pair(u,i));
        }
    }
    int n=edges.size();
    for(int i=0;i<n;i++){
        int u=edges[i].first;
        Edge e=G.adj[u][edges[i].second];
        int max_flow=G.DinicMaxflow(u,e.v);
        if(max_flow>0){
            G.adj[u][edges[i].second].C=max_flow;
            G.adj[u][edges[i].second].flow=0;
            G.adj[e.v][e.rev].flow=0;
        }
    }
    for(int i=0;i<n;i++){
        int u=edges[i].first;
        Edge e=G.adj[u][edges[i].second];
        if(e.C-e.flow>0)
            cout<<G.names[u]<<" to "<<G.names[e.v]<<" - "<<e.C-e.flow<<endl;
    }
}