//https://www.spoj.com/problems/EDIST/
//@bl!nd_mon3y
//reference---https://www.youtube.com/watch?v=MiqoA-yF-0M

#include<bits/stdc++.h>
using namespace std;

int E[2222][2222];

int EditDistance(string a,string b,int n,int m){
   int i,j;
   for( i=0;i<=n;i++){
      for(j=0;j<=m;j++){
         if( i==0)
            E[i][j]=j; 
         else if(j==0)
            E[i][j]=i; 
         else if( a[i-1]==b[j-1])
            E[i][j] = E[i-1][j-1];
         else
         {
            E[i][j] = min( E[i][j-1],min( E[i-1][j], E[i-1][j-1]))+1;
         }	
      }
   }
   return E[n][m];
}

int main() {
   string a,b;
   int t;
   cin>>t;
   while(t--)
   {
      cin>>a>>b;
      cout<<EditDistance(a,b,a.length(),b.length())<<endl;
   }
}
