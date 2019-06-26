//https://www.spoj.com/problems/PARTY/
//bl1nd_m0n3y
//reference---https://www.youtube.com/watch?v=8LusJS5-AGo




#include <bits/stdc++.h>
using namespace std;

int main() {
   int n,W;
   cin>>W>>n;
   while(W!=0 && n!=0)
   {
      int val[n],wgt[n];
      for(int i=0; i<n ; ++i)
         cin>>wgt[i]>>val[i];
     
      int dp[n+1][W+1];
      
      for(int i=0; i<=n;i++)
         for(int j=0; j<=W ;j++)
         {
            if(i==0 || j==0)
               dp[i][j]=0;
            else if(wgt[i-1]<=j)
            {
              dp[i][j]=max(dp[i-1][j-wgt[i-1]] + val[i-1],dp[i-1][j]);
            }	
            else
            {
               dp[i][j]=dp[i-1][j];
            }	
         }
   
   int ans=-1;
   for(int i=1; i<=W; ++i)
      if(dp[n][i]==dp[n][W])
      {
         ans=i;
         break;
      }
   cout<<ans<<" "<<dp[n][W]<<endl;
   cin>>W>>n;
   }
}
