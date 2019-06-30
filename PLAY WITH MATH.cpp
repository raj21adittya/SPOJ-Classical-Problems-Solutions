//https://www.spoj.com/problems/ENIGMATH/
//bl!nd_m0n3y
//reference---https://www.geeksforgeeks.org/find-smallest-values-of-x-and-y-such-that-ax-by-0/


#include <bits/stdc++.h>
using namespace std;
#define LL long long


int main(){
	int t;
	cin>>t;
	while(t--){
		LL a,b;
		cin>>a>>b;
		LL gcd=__gcd(a,b);
		LL lcm=(a*b)/gcd;
		a=lcm/a;
		b=lcm/b;
		cout<<a<<" "<<b<<endl;
	}
}
