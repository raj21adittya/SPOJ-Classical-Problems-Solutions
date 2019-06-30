//https://www.spoj.com/problems/AMR10G/
//bl1nd_m0n3y

#include <bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int arr[n];
		for(int i=0;i<n;i++)
		cin>>arr[i];
		int min=1000000002;
		sort(arr,arr+n);
		for(int i=0;i<=n-k;i++){
			if(arr[i+k-1]-arr[i]<=min){
				min=arr[i+k-1]-arr[i];
			}
		}
		cout<<min<<endl;
	}
}
