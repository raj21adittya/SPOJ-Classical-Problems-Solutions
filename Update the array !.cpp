//https://www.spoj.com/problems/UPDATEIT/
//@bl1nd_m0n3y
//reference---https://www.geeksforgeeks.org/difference-array-range-update-query-o1/


#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,u;
		scanf("%d",&n);
		scanf("%d",&u);
		int diffarr[n]={0};
		for(int i=0;i<u;i++){
			int l,r,val;
			scanf("%d",&l);
			scanf("%d",&r);
			scanf("%d",&val);
			diffarr[l]+=val;
			diffarr[r+1]-=val;
		}
		int arr[n];
		arr[0]=diffarr[0];
		for(int i=1;i<n;i++)
			arr[i]=arr[i-1]+diffarr[i];
		int q;
		scanf("%d",&q);
		while(q--){
			int index;
			scanf("%d",&index);
			printf("%d\n",arr[index]);
			
		}
	}
}
