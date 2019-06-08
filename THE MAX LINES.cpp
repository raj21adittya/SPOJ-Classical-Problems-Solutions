//https://www.spoj.com/problems/MAXLN/
//@bl!nd_m0n3y

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	int i=1;
	while(t--){
		int r;
		cin>>r;
		int s;
		s=4*r*r;
        cout<<"Case "<<i<<": "<<s<<".25"<<endl;
		i++;
	}
}
