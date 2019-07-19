//https://www.spoj.com/problems/CEQU/
//@bl1nd_m0n3y
//reference---https://www.geeksforgeeks.org/linear-diophantine-equations/


#include <bits/stdc++.h>
using namespace std;
#define ll long long 


int gcd(int a,int b){ 
    return (a%b==0)? abs(b) : gcd(b,a%b); 
} 


int main(){
	int  t;
	cin>>t;
	for(int i=1;i<=t;i++){
		int a,b,c;
		cin>>a>>b>>c;
		if(c%gcd(a,b)==0)
		cout<<"Case "<<i<<": Yes"<<endl;
		else
		cout<<"Case "<<i<<": No"<<endl;
	}
}
