//https://www.spoj.com/problems/ABSP1/
//bl1nd_m0n3y

#include<bits/stdc++.h> 
using namespace std; 
#define ll long long 
  
ll absSumPairs(ll arr[],ll n){ 
    ll sum=0; 
    for(ll i=n-1;i>=0;i--) 
        sum+=i*arr[i]-(n-1-i)*arr[i]; 
    return sum; 
} 
  
int main(){ 
    ll t;
    cin>>t;
    while(t--){
    	ll n;
    	cin>>n;
    	ll arr[n];
    	for(ll i=0;i<n;i++)
    	cin>>arr[i];
    	cout<<absSumPairs(arr,n)<<endl;
    }
} 
