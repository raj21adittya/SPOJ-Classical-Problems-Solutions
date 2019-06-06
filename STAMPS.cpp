//https://www.spoj.com/problems/STAMPS/
//@bl1nd_m0n3y


#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n,x;
		cin>>x>>n;
		int a[n];
		int sum=0;
		for(int j=0;j<n;j++){
		    cin>>a[j];
			sum+=a[j];
		}
		cout<<"Scenario #"<<i+1<<":"<<endl;
		if(sum<x)
		cout<<"impossible"<<endl<<endl;
		else{
			sort(a,a+n);
			int count=0,sum2=0,k=n-1;
			while(sum2<x){
				sum2+=a[k];
				k--;
				count++;
			}
			cout<<count<<endl<<endl;
		}
	}
}
