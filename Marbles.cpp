//https://www.spoj.com/status/ns=24020835
//@bl1nd_m0n3y

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		ll minn=min(n-k,k-1);
		ll ans=1;
		for(int i=1;i<=minn;i++){
			ans=(ans*(n-i))/i;
		}
		cout<<ans<<endl;
		
	}
}
