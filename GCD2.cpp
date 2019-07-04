//https://www.spoj.com/problems/GCD2/
//@bl1nd_m0n3y
//reference---https://www.geeksforgeeks.org/gcd-of-two-numbers-when-one-of-them-can-be-very-large-2/



#include<bits/stdc++.h>
using namespace std;

char b[252];

int gcd(int a, int b){
	if(!a) return b;
	return gcd(b%a,a);
}

int main(){
	int t;
	for(scanf("%d",&t);t--;){
		int mod = 0;
		int a;
		cin>>a;
		cin>>b;
		if(!a){
			cout<<b<<endl;
			continue;
		}
		for(int i=0;i<strlen(b);i++){
			mod=(mod*10+b[i]-'0')%a;
		}
		cout<<gcd(mod,a)<<endl;
	}
}
