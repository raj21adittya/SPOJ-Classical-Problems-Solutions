//https://www.spoj.com/problems/CRDS/
//@bl!nd_m0n3y

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long x=(n*(n+1))+((n*(n-1))/2);
		x=x%1000007;
		cout<<x<<endl;
	}
}
