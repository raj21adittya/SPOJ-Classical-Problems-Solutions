//https://www.spoj.com/problems/MISERMAN/
//@bl1nd_m0n3y


#include<bits/stdc++.h>
using namespace std;

int main(){
	int m,n;
	cin>>n>>m;
	int arr[n][m+2];
	for(int i=0;i<n;i++){
		for(int j=0;j<m+2;j++){
			if(j==0 || j==m+1)
			arr[i][j]=1002;
			else
			cin>>arr[i][j];
		}
	}
	
	for(int k=n-2;k>=0;k--){
		for(int l=1;l<=m;l++){
			arr[k][l]+=min(arr[k+1][l-1],min(arr[k+1][l],arr[k+1][l+1]));
		}
	}
	int ans=arr[0][1];
	for(int z=2;z<=m;z++){
		if(arr[0][z]<ans){
			ans=arr[0][z];
		}
	}
	cout<<ans;
	
}
