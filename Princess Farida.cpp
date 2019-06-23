//https://www.spoj.com/problems/FARIDA/
//@bl1nd_m0n3y


#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t;
	cin>>t;
	long long l=1;
	while(t--){
		long long n;
		cin>>n;
		long long arr[n];
		for(int i=0;i<n;i++)
		cin>>arr[i];
		
		if (n == 0) 
        cout<<"Case "<<l<<": 0"<<endl; 
        else if (n == 1) 
        cout<<"Case "<<l<<": "<<arr[0]<<endl;
        else if (n == 2) 
        cout<<"Case "<<l<<": "<<max(arr[0],arr[1])<<endl; 
        else{
		long long dp[n];
		dp[0]=arr[0];
		dp[1]=max(arr[0],arr[1]);
		for(int j=2;j<n;j++)
		dp[j]=max((arr[j]+dp[j-2]),dp[j-1]);
		cout<<"Case "<<l<<": "<<dp[n-1]<<endl;
        }
		l++;
		
	}
}
