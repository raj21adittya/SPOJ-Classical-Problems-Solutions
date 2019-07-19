//https://www.spoj.com/problems/ROOTCIPH/
//@bl1nd_m0n3y

#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
	long long t;
	scanf("%lld",&t);
	while(t--){
		long long a,b,c;
		scanf("%lld%lld%lld",&a,&b,&c);
		long long ans=(a*a)-(2*b);
		printf("%lld\n",ans);
	}
}
