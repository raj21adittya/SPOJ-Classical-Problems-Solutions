//https://www.spoj.com/problems/QUADAREA/
//@bl!md_m0n3y
//reference---https://www.geeksforgeeks.org/maximum-area-quadrilateral/

#include <bits/stdc++.h>
using namespace std;

int main() {
     int t;
     double res,a,b,c,d;
     cin>>t;
     while(t--)
     {
          res = 0;
          cin>>a>>b>>c>>d;
          double s= (a+b+c+d)/2;
          double k = (s-a)*(s-b)*(s-c)*(s-d);
          res = sqrt(k);
          printf("%.2lf\n",res);
     }
     return 0;
}
