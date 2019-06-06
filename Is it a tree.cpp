//https://www.spoj.com/problems/PT07Y/
//@bl!nd_m0n3y


#include <bits/stdc++.h>
using namespace std;
vector<int> graph[10002];
bool dfs(vector<int> graph[] ,int u,int n)
{
	bool nodevisited[n+1];
	stack<int> s;
	memset(nodevisited,false,sizeof(nodevisited));
	s.push(u);
	int temp,temp2,comp=0;
	while(!s.empty())
	{	
		comp++;
		temp=s.top();
		s.pop();
		if(nodevisited[temp])
		{
			return false;
		}
		else
		{
			nodevisited[temp]=true;
			for(int i=0;i<graph[temp].size();i++)
			{
				temp2=graph[temp][i];
				s.push(temp2);
			}
		}
	}
	if(comp!=n)
	{
		return false;
	}
	else
	{
		return true;
	}
}
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int u,v;
		cin>>u>>v;
		graph[u].push_back(v);
	}
	if(dfs(graph,1,n) && m+1==n)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return 0;
}
