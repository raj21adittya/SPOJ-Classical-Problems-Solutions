//https://www.spoj.com/problems/DIEHARD/
//@bl1nd_m0n3y


#include <bits/stdc++.h>
using namespace std;

int dp[2000][2000];


int dieHard(int h, int a){
	
    if(h<=0||a<=0)
    return -1;
    else if(dp[h][a]==-1)
    dp[h][a]=max(dieHard(h-17,a+7)+2,dieHard(h-2,a-8)+2);
    
    return dp[h][a];
}

int main(){
	int t;
	cin>>t;
	memset(dp,-1,sizeof(dp));
	while(t--){
		int h,a;
		cin>>h>>a;
		cout<<dieHard(h,a)<<endl;
	}
}
