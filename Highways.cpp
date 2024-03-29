//https://www.spoj.com/problems/HIGHWAYS/
//@bl1nd_m0n3y


//reference---https://www.geeksforgeeks.org/dijkstras-shortest-path-algorithm-using-priority_queue-stl/
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
    if(dist[dest]!=INF)
    cout<<dist[dest]<<endl;
    else
    cout<<"NONE"<<endl;
} 
int main(){
	
	int t;
	cin>>t;
	while(t--){
		int n,e,src,dest;
		cin>>n>>e>>src>>dest;
		src-=1;
		dest-=1;
		vector<iPair> adj[n];
		for(int i=0;i<e;i++){
			int u,v,w;
			cin>>u>>v>>w;
			u-=1;
			v-=1;
			addEdge(adj,u,v,w);
		}
		djikstraAlgo(adj,n,src,dest);
	}
	
}




//reference---https://www.geeksforgeeks.org/dijkstras-shortest-path-algorithm-greedy-algo-7/
//reference---https://www.youtube.com/watch?v=wQIb1NonMIM&list=PL_k8jTXFgD1zlr6mSC-s3mC3UyIVMQ4nw&index=7&t=743s
/*
//Below code is giving Runtime Error......
#include<bits/stdc++.h>
using namespace std;


int minDistance(int dist[],bool visited[],int V){ 
   int min=INT_MAX,min_index; 
   for (int v=0;v<V;v++) 
     if (visited[v]==false && dist[v]<=min) 
         min=dist[v],min_index=v; 
   
   return min_index; 
} 


int main(){
	int t;
	cin>>t;
	while(t--){
		int n,e,sou,des;
		cin>>n>>e>>sou>>des;
		sou-=1;
		des-=1;
		int edges[n][n];
		for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		edges[i][j]=0;
		for(int i=0;i<e;i++){
			int f,s,weight;
			cin>>f>>s>>weight;
			f-=1;
			s-=1;
			edges[f][s]=weight;
			edges[s][f]=weight;
		}
		/*for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
		cout<<edges[i][j];
		cout<<endl;
		}*/
		
		//Dijsktra Algo
		
		int dist[n];  
        bool visited[n];
        //memset(dist,1002,sizeof(dist));
        //memset(visited,false,sizeof(visited));
        for(int i=0;i<n;i++)
        dist[i]=INT_MAX;
        for(int i=0;i<n;i++)
        visited[i]=false;
        /*for(int i=0;i<n;i++)
        cout<<visited[i];*/
        
        dist[sou]=0; 
     
        for(int count=0;count<n-1;count++){ 
        	
        	//finding minimum Vertex
        	
     	    /*int min=1002,min_index; 
            for (int v=0;v<n;v++)
            if(visited[v]==false&&dist[v]<=min) 
            min=dist[v],min_index=v; */
            
   
            int u=minDistance(dist,visited,n);
            if(u==des)
            break;
            visited[u]=true; 
            for(int v=0;v<n;v++) 
            if(!visited[v] && edges[u][v] && dist[u]!=1002 && dist[u]+edges[u][v]<dist[v]) 
            dist[v]=dist[u]+edges[u][v]; 
        } 
        if(dist[des]!=INT_MAX)
        cout<<dist[des]<<endl;
        else
        cout<<"NONE"<<endl;
		
	}
}
*/
