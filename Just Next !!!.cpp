//https://www.spoj.com/problems/JNEXT/
//bl1nd_m0n3y

#include <bits/stdc++.h>
using namespace std;

int main(){
  int i,j,k,m,n,t;
  cin>>t;
  while(t--){
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
      cin>>a[i];
    }
    
    for(i=n-2;i>=0;i--){
      if( a[i]<a[i+1] )
	break;
    }
    
    if( i==-1 ){
      cout<<"-1"<<endl;
      continue;
    }
    
    for(j=i+1;j<n;j++){
      if( a[j]<=a[i] )
	break;
    }
    
    swap(a[i],a[j-1]);
    
    sort(a+i+1,a+n);
    
    for(i=0;i<n;i++)
      cout<<a[i];
      
    cout<<endl;
  }
}
