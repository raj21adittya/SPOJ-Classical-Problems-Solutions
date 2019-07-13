//https://www.spoj.com/problems/MRECAMAN/
//@bl1nd_m0n3y


//Below code giving TLE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll recaman(ll n){
	map<int,int> m;
    ll ans[n+1]={0};
	m[0]=0;
	for(ll i=1;i<=n;i++){
		if(((ans[i-1]-i)>0)&&(m.find(ans[i-1]-i)==m.end())){
			ans[i]=ans[i-1]-i;
			m[ans[i]]=1;
		}
		else
		{
			ans[i]=ans[i-1]+i;
			m[ans[i]]=1;
		}
	}
	return ans[n];
}

int main(){
	ll n;
	cin>>n;
	while(n!=-1){
		cout<<recaman(n)<<endl;
		cin>>n;
	}
}
