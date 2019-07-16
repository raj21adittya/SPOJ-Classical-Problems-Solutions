//https://www.spoj.com/problems/ALICESIE/
//@bl1nd_m0n3y

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n%2==0)
		cout<<n/2<<endl;
		else
		cout<<(n+1)/2<<endl;
	}
}
