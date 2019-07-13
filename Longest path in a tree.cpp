//https://www.spoj.com/problems/PT07Z/
//@bl!nd_m0n3y


#include<bits/stdc++.h>
using namespace std;


pair<int,int> bfs(vector<int> graph[],int n,int src){
	bool visited[n];
	int dist[n];
	memset(visited,false,sizeof(visited));
	memset(dist,0,sizeof(dist));
	queue<int> q;
	q.push(src);
	visited[src]=true;
	while(!q.empty()){
		int top=q.front();
		q.pop();
		for(int i=0;i<graph[top].size();i++){
			if(visited[graph[top][i]]==false){
				dist[graph[top][i]]=dist[top]+1;
				q.push(graph[top][i]);
				visited[graph[top][i]]=true;
			}
		}
		
	}
	int minn=INT_MIN,ans;
	for(int i=0;i<n;i++)
	if(dist[i]>minn)
	minn=dist[i],ans=i;
	
	return make_pair(ans,minn);
	
}
int main(){
	int n;
	cin>>n;
	vector<int> graph[n];
	for(int i=0;i<n-1;i++){
		int u,v;
		cin>>u>>v;
		u-=1;
		v-=1;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	int x=bfs(graph,n,0).first;
	int y=bfs(graph,n,x).first;
	int z=bfs(graph,n,x).second;
	cout<<z<<endl;
}


