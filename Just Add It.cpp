//https://www.spoj.com/problems/ZSUM/
//@bl1nd_m0n3y
//reference---https://www.geeksforgeeks.org/modular-exponentiation-power-in-modular-arithmetic/


#include <bits/stdc++.h>
using namespace std;
#define ll long long 

ll power(ll x,ll y,ll p){ 
    ll res=1; 
    x=x%p;  
    while(y>0){ 
        if (y&1) 
            res=(res*x)%p; 
        y=y>>1;
        x=(x*x)%p;   
    } 
    return res; 
} 


int main(){
  ll n,k;
  ll p=10000007;
  cin>>n>>k;
  while(n!=0 && k!=0){
  	//solve and then expression reduces to npow(k)+ npow(n) + 2(n-1)pow(n-1) + 2(n-1)pow(k) 
  	ll ans=power(n,k,p);
  	ans=(ans+power(n,n,p))%p;
  	ans=(ans+2*power(n-1,n-1,p))%p;
  	ans=(ans+2*power(n-1,k,p))%p;
  	cout<<ans<<endl;
  	cin>>n>>k;
  }
}
