//https://www.spoj.com/problems/DSUBSEQ/
//@bl1nd_m0n3y
//reference---https://www.geeksforgeeks.org/count-distinct-subsequences/


#include<bits/stdc++.h>

using namespace std;

#define mod 1000000007
#define ll long long

int subSeq(string s){
	int n=s.length();
	ll dp[100009];
	dp[0]=1;
	int flag[500];
	memset(flag,-1,sizeof(flag));
	for(int i=1;i<n+1;i++){
		dp[i]=(2*dp[i-1])%mod;
		
		if(flag[s[i-1]]!=-1){
			dp[i]=(dp[i]-dp[flag[s[i-1]]-1]+mod)%mod;
		}
		
		flag[s[i-1]]=i;
	}
	return dp[n];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<subSeq(s)<<endl;
	}
}
