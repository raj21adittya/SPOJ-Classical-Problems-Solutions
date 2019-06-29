//https://www.spoj.com/problems/HOTELS/
//



#include <bits/stdc++.h>
using namespace std;


int main(){
   int n,m;
   cin>>n>>m;
   int arr[n];
   for(int i=0;i<n;i++)
   cin>>arr[i];
   long long globalmaxx=arr[0];
   long long maxx=arr[0];
   int j=0;
   for(int i=1;i<n;i++){
      maxx=((maxx+arr[i]>arr[i])? maxx+arr[i]:arr[i]);
      while(maxx>=m){
         maxx-=arr[j++];
         if(maxx==m)
            globalmaxx=maxx;
      }
      globalmaxx=max(maxx,globalmaxx);
   }
   cout<<globalmaxx;
}
