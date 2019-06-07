//https://www.spoj.com/problems/TRICOUNT/
//@bl!nd_m0n3y

    #include <bits/stdc++.h>
    using namespace std;
    #define LL long long
    int main() {
         int t;
         LL n;   
         cin>>t;
         while(t--)
         {
              cin>>n;
              if(n%2)   
                   cout<<(((n)*(n+2)*(2*n+1)-1)/8)<<endl;
              else
                   cout<<(((n)*(n+2)*(2*n+1))/8)<<endl;
         }
         
         return 0;
    }
