//https://www.spoj.com/problems/COMDIV/
//@bl1nd_m0n3y

#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(b==0)
        return a;
    else
        gcd(b,a%b);
}


int main(){
 int t;
 scanf("%d",&t);
 while(t--){
  int a,b;
  scanf("%d %d",&a,&b);
  int n=gcd(a,b);
  int ans=0;
  for(int i=1;i<=sqrt(n);i++)
  {
   if(n%i==0){
    ans+=2;
   if(i==n/i)
    ans--;
   }
  } 
  printf("%d\n",ans);
 }
}
