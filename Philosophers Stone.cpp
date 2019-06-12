//https://www.spoj.com/problems/BYTESM2/
//bl!nd_m0n3y
//reference---http://code.cloudkaksha.org/spoj/spoj-bytesm2-solution


#include <bits/stdc++.h>
using namespace std;

int main() {
   int t,a,b;
   cin>>t;
   while(t--)
   {
      cin>>a>>b;
      int ar[a][b+2]={0};
      ar[0][b+1]=0;
      
      for(int i=0;i<a;i++)
         for(int j=1;j<=b;j++)
            cin>>ar[i][j];
 
      for(int i=a-2;i>=0;i--)		
         for(int j=1;j<=b;j++)
            ar[i][j]+=max(ar[i+1][j-1],max(ar[i+1][j],ar[i+1][j+1]));
      int ans=ar[0][1];
      for(int i=2;i<=b;i++)
         if(ar[0][i]>ans)
            ans=ar[0][i];
      cout<<ans<<endl;
   }
}
