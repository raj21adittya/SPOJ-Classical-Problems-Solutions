//https://www.spoj.com/problems/LASTDIG2/
//bl1nd_m0n3y

#include<bits/stdc++.h>
using namespace std;


int main(){
    long long int n;
    int t,ans,j,x;
    char a[1002];
    cin>>t;
    while(t--){
        cin>>a>>n;
     int m=a[strlen(a)-1]-48;
     if(m==0&&n==0)
         ans=0;
     else if(n==0)
          ans=1;
     else{        
      int l=n%4;
            if(l==0)
             x=pow(m,4);
            else
                x=pow(m,l);
            ans=x%10;
     }
    cout<<ans<<endl;
    }
}


