//https://www.spoj.com/problems/OLOLO/
//bl!Nd_m0n3y

 #include <bits/stdc++.h> 
using namespace std;
typedef long long LL;

int main() {
	LL n,ans=0,x;
	scanf("%lld",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&x);
		ans ^= x;
	}
	printf("%lld\n",ans);
}
