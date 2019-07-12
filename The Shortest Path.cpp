//https://www.spoj.com/problems/SHPATH/
//@bl1nd_m0n3y


#include<bits/stdc++.h>
using namespace std;

#define INF 100000000 
  
typedef pair<int, int> iPair; 

void addEdge(vector<pair<int,int>> adj[],int u,int v,int w){
	adj[u].push_back(make_pair(v,w));
    adj[v].push_back(make_pair(u,w));
}

void djikstraAlgo(vector<pair<int,int> > adj[],int V,int src,int dest){ 
    priority_queue< iPair, vector <iPair> , greater<iPair> > pq; 
    vector<int> dist(V,INF); 
    pq.push(make_pair(0,src)); 
    dist[src]=0; 
    while(!pq.empty()){
        int u=pq.top().second; 
        pq.pop();
        for(auto x:adj[u]){
            int v=x.first; 
            int weight=x.second; 
            if(dist[v]>dist[u]+weight){
                dist[v]=dist[u]+weight; 
                pq.push(make_pair(dist[v],v)); 
            } 
        } 
    } 
    
    cout<<dist[dest]<<endl;
} 
int main(){
	
	int t;
	cin>>t;
	while(t--){
		int n,e,src,dest;
		cin>>n;
		vector<iPair> adj[n];
		map<string,int> city;
		for(int i=0;i<n;i++){
			string s;
			int nng;
			cin>>s;
			cin>>nng;
			city.insert(pair<string,int>(s,i));
			for(int j=0;j<nng;j++){
				int ng,wgt;
				cin>>ng>>wgt;
				ng-=1;
				addEdge(adj,i,ng,wgt);
			}
		}
		int r;
		cin>>r;
		for(int i=0;i<r;i++){
			string s1,s2;
			cin>>s1>>s2;
			djikstraAlgo(adj,n,city[s1],city[s2]);
		}
		cout<<endl;
	}
	
}
