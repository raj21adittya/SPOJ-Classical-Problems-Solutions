//https://www.spoj.com/problems/TRT/
//bl1nd_m0n3y


#include <bits/stdc++.h>
using namespace std;

int val[2002];
int dp[2002][2002];
int n;

int treatCows(int start,int end,int yr)
{	
   if(start>end)	
      return 0;
   if(dp[start][end]!=-1)	
      return dp[start][end];
   else
      return dp[start][end]=max(treatCows(start+1,end,yr+1)+val[start]*yr,
      treatCows(start,end-1,yr+1)+val[end]*yr);
}

int main() {
   cin>>n;
   for(int i=0;i<n;++i)
   cin>>val[i];
   memset(dp,-1,sizeof(dp));
   cout<<treatCows(0,n-1,1);
}
