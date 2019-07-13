//https://www.spoj.com/problems/LENGFACT/
//@bl1nd_m0n3y
//reference---https://www.geeksforgeeks.org/count-digits-factorial-set-2/

#include<bits/stdc++.h>
using namespace std;

#define ll long long

#define pi M_PI
#define ln10 M_E

int main(){ 
   int t; 
   ll ans,n;
   cin>>t;
   while(t--){
      ans=0;
      cin>>n;
      if(n<3) 
         cout<<"1"<<endl;
      else{
         ans=ceil(log10(2*pi*n)/2 + n*log10(n/ln10)); 
         cout<<ans<<endl;
      }
   }
}
