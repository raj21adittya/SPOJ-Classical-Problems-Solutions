//https://www.spoj.com/problems/ACPC10D/
//@bl1nd_m0n3y


#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int t=0;
	while(n>0){
		t++;
		int dp[n][3];
		for(int i=0;i<n;i++){
			for(int j=0;j<3;j++){
				cin>>dp[i][j];
			}
		}
		for(int i=0;i<n;i++){
			if(i==0){
				dp[i][2]+=dp[i][1];
			}
			else if(i==1){
				dp[i][0]+=dp[i-1][1];
				dp[i][1]+=min(dp[i-1][1],min(dp[i][0],dp[i-1][2]));
				dp[i][2]+=min(dp[i-1][1],min(dp[i][1],dp[i-1][2]));
				
			}
			else{
				dp[i][0]+=min(dp[i-1][0],dp[i-1][1]);
				dp[i][1]+=min(dp[i][0],min(dp[i-1][0],min(dp[i-1][1],dp[i-1][2])));
				dp[i][2]+=min(dp[i][1],min(dp[i-1][1],dp[i-1][2]));
			}
		}
		int ans=dp[n-1][1];
		cout<<t<<". "<<ans<<endl;
		cin>>n;
	}
}
