//https://www.spoj.com/problems/BUSYMAN/
//bl1nd_m0n3y
//reference---https://www.geeksforgeeks.org/sorting-vector-of-pairs-in-c-set-1-sort-by-first-and-second/


#include <bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){ 
    return (a.second<b.second); 
} 


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<pair <int ,int>> vec;
		for(int i=0,x,y;i<n;i++){
			cin>>x>>y;
			vec.push_back(make_pair(x,y));
		}
		sort(vec.begin(),vec.end(),sortbysec);
		int flag=-1,ans=0;
		for(int i=0;i<n;i++){
			if(vec[i].first>=flag){
				ans++;
				flag=vec[i].second;
			}
		}
		cout<<ans<<endl;
		
	}
}
