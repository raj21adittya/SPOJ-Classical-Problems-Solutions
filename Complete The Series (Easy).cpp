//https://www.spoj.com/problems/AP2/
//@bl!nd_m0n3y

#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t;
	cin>>t;
	while(t--){
		long long x,y,z,n,d,a;
		cin>>x>>y>>z;
		if(z%(x+y)==0)
		n=(z/(x+y))*2;
		else
		n=(z/(x+y))*2 +1;
		cout<<n<<endl;
		d=(y-x)/(n-5);
		a=x-2*d;
		for(int i=0;i<n;i++)
		cout<<a+i*d<<" ";
		cout<<endl;
	}

}
