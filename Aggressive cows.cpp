//https://www.spoj.com/problems/AGGRCOW/
//@bl1nd_m0n3y
//referece---https://www.quora.com/What-is-the-correct-approach-to-solve-the-SPOJ-problem-Aggressive-cow


#include<bits/stdc++.h>
using namespace std;

int F(int x,int arr[],int n,int c){
	int cowscount=1,pos=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]-pos>=x){
			cowscount++;
			if(cowscount==c){
				return 1;
			}
			pos=arr[i];
		}
	}
	return 0;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,c;
		cin>>n>>c;
		int arr[n];
		for(int i=0;i<n;i++)
		cin>>arr[i];
		sort(arr,arr+n);
		int start=0,end=arr[n-1]-arr[0]+1,mid;
		while(end-start>1){
			mid=(start+end)/2;
			(F(mid,arr,n,c)?start:end)=mid;
		}
		cout<<start<<endl;
	}

}
