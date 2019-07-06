//https://www.spoj.com/problems/AMR11E/
//@bl1nd_m0n3y


#include<bits/stdc++.h>
using namespace std;

int main(){
	int prime[3000];
	int lucky[1000];
	memset(prime,0,sizeof(prime));
	memset(lucky,0,sizeof(lucky));
	for(int i=2;i<3000;i++){
		if(prime[i]==0){
			for(int j=2*i;j<3000;j+=i){
				prime[j]++;
			}
		}
	}
	for(int k=0,l=30;k<1000 && l<3000;l++){
		if(prime[l]>=3){
			lucky[k++]=l;
		}
	}
	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
		cout<<lucky[x-1]<<endl;
	}

}
