//https://www.spoj.com/submit/OFFSIDE/
//@bl1nd_m0n3y


#include <bits/stdc++.h>
using namespace std;

int main() {
     int a,b;
     cin>>a>>b;
     while(a!=0 && b!=0)
     {
          vector<int> A(a),B(b);
          for(int i=0;i<a;++i)
               cin>>A[i];
          for(int i=0;i<b;++i)
               cin>>B[i];	
          sort(B.begin(),B.end());
          sort(A.begin(),A.end());
          
          if(A[0]<B[1])
               cout<<"Y"<<endl;
          else
               cout<<"N"<<endl;
          cin>>a>>b;
     }
     return 0;
}
