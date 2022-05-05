
#include<bits/stdc++.h>
using namespace std;
const int INF = 1e9;
int main(){
	int n,m;
	cin>>n>>m;

	vector<vector<int>> edge;
	for(int i=0;i<m;i++){
		int u,v,w;
		cin>>u>>v>>w;
		edge.push_back({u,v,w});

	}
	int src;
	cin>>src;
	vector<int> dist(n,INF);
	dist[src]=0;
	for(int i=0;i<n-1;i++){
		bool change = false;
		for(auto e : edge){
			int u =e[0];
			int v =e[1];
			int w =e[2];
			if(dist[v] > w+dist[u])
				change = true;
			dist[v] = min(dist[v],w+dist[u]);
		}
	}
	for(auto i : dist){
		cout<<i<<" ";
	}cout<<"\n";
}