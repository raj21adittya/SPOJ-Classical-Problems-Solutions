//https://www.spoj.com/problems/SUMFOUR/
//@bl1nd_m0n3y

#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
	int n,ans=0;
	cin>>n;
	int a[n],b[n],c[n],d[n];
	for(int i=0;i<n;i++)
	cin>>a[i]>>b[i]>>c[i]>>d[i];
	vector<int> vlhs;
	vector<int> vrhs;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			vlhs.push_back(a[i]+b[j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			vrhs.push_back(-c[i]-d[j]);
		}
	}
	sort(vlhs.begin(),vlhs.end());
	sort(vrhs.begin(),vrhs.end());
	
	
	for(int l=0;l<vlhs.size();l++){
		int x=lower_bound(vrhs.begin(),vrhs.end(),vlhs[l])-vrhs.begin();
		int y=upper_bound(vrhs.begin(),vrhs.end(),vlhs[l])-vrhs.begin();
		ans+=abs(x-y);
	}
	cout<<ans;
	
}
