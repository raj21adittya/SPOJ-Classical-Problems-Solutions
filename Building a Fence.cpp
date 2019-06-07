//https://www.spoj.com/problems/FENCE1/
//@bl!nd_m0n3y


    #include <bits/stdc++.h>
    using namespace std;
    int main() {
         int num;
         scanf("%d",&num);
         while(num)
         {
              float ans=0;
              ans=(1/2.0)*(num*num)*(1/3.1415926);
              printf("%.2f\n",ans);
              scanf("%d",&num);   
         }
         return 0;
    }
