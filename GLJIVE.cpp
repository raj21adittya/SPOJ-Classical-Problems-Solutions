//https://www.spoj.com/problems/GLJIVE/
//@bl1nd_m0n3y


#include<bits/stdc++.h>

using namespace std;

int main(){
	int sum=0,a[10];
	for(int i=0;i<10;i++)
		cin>>a[i];
	for(int i=0;i<10;i++){
		if(abs(sum-100)<abs(sum+a[i]-100))
			break;
		else
			sum+=a[i];
	}
	cout<<sum;
}
