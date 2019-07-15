/https://www.spoj.com/problems/CADYDIST/
//@bl1nd_m0n3y


#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long


int main(){
	ll n;
	cin>>n;
	while(n!=0){
		ll c[n];
		ll p[n];
		for(ll i=0;i<n;i++)
		cin>>c[i];
		for(ll i=0;i<n;i++)
		cin>>p[i];
		sort(c,c+n);
		sort(p,p+n,greater<int>());
		/*for(ll i=0;i<n;i++)
		cout<<c[i]<<endl;
		for(ll i=0;i<n;i++)
		cout<<p[i]<<endl;
		*/
		ll ans=0;
		for(ll j=0;j<n;j++)
		ans+=c[j]*p[j];
		cout<<ans<<endl;
		cin>>n;
		
	}
	
}
