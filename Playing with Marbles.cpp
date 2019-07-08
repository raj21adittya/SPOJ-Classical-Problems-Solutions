//https://www.spoj.com/problems/BOMARBLE/
//@bl1nd_m0n3y


#include<bits/stdc++.h>
using namespace std;

int pentagons(int n){
	if(n==1)
	return 5;
	else 
	return (4+3*(n-1)+pentagons(n-1)); 
	
}
int main(){
	int n;
	cin>>n;
	while(n>0){
		cout<<pentagons(n)<<endl;
		cin>>n;
	}
}
