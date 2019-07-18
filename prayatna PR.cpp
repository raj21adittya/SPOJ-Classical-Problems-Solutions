//https://www.spoj.com/problems/CAM5/
//@bl1nd_m0n3y


#include <bits/stdc++.h>
using namespace std;
#define ll long long 



void dfs(vector<int>adj[],int n,int src,bool visited[]){
	visited[src]=true;
	for(int i=0;i<adj[src].size();i++){
		if(!visited[adj[src][i]]){
			dfs(adj,n,adj[src][i],visited);
		}
	}
}

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,e;
		cin>>n>>e;
		vector<int> adj[n];
		for(ll i=0;i<e;i++){
			ll x,y;
			cin>>x>>y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		ll noConnectedComp=0;
		bool visited[n];
		memset(visited,false,sizeof(visited));
		for(ll j=0;j<n;j++){
			if(!visited[j]){
				dfs(adj,n,j,visited);
				noConnectedComp++;
			}
		}
		cout<<noConnectedComp<<endl;
	}
}
