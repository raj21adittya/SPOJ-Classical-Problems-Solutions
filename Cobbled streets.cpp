//https://www.spoj.com/problems/CSTREET/
//@bl1nd_m0n3y


#include<bits/stdc++.h>
using namespace std;
#define ll long long

typedef pair<ll,ll> iPair;

ll primsAlgo(vector<pair<ll,ll> > adj[],ll n){ 
    priority_queue< iPair, vector <iPair> , greater<iPair> >pq; 
  
    ll src=0;
    vector<ll> dist(n,INT_MAX); 
    vector<ll> parent(n,-1); 
    vector<bool> visited(n,false); 
    pq.push(make_pair(0,src)); 
    dist[src]=0; 
  
    while(!pq.empty()){ 
        
        ll u=pq.top().second; 
        pq.pop(); 
  
        visited[u]=true;
        for(auto x : adj[u]){ 
             
            ll v=x.first; 
            ll weight=x.second; 
            if (visited[v]==false && dist[v]>weight){
                dist[v]=weight; 
                pq.push(make_pair(dist[v],v)); 
                parent[v]=u; 
            } 
        } 
    } 
  
    ll ans=0;
    for(int i=0;i<n;i++)
    ans+=(dist[i]);
    return ans;
    
} 




int main(){
	int t;
	cin>>t;
	while(t--){
		ll price,n,e;
		cin>>price>>n>>e;
		vector<iPair> adj[n];
		for(int i=0;i<e;i++){
			ll u,v,wgt;
			cin>>u>>v>>wgt;
			u-=1;
			v-=1;
			wgt*=price;
			adj[u].push_back(make_pair(v,wgt));
		    adj[v].push_back(make_pair(u,wgt));
		}
		cout<<primsAlgo(adj,n)<<endl;
	}
}
