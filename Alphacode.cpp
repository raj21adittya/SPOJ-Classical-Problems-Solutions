//https://www.spoj.com/problems/ACODE/
//@bl!nd_m0n3y
//reference---https://www.quora.com/How-do-I-solve-the-ACODE-problem-on-SPOJ


#include <bits/stdc++.h>
using namespace std;


int main() {
	
string s;
   cin>>s;
   while(s[0]!='0')
   {
      int len=s.length();
      long long dp[len+1]={0};
      dp[0]=1;
      int i=1; 
      while(i<len)
      {
         int num=(s[i-1]-'0')*10;
         num+=s[i]-'0';
         
         if(s[i]-'0')
         {
            dp[i]=dp[i-1];
         }	
         if(num>9 && num<=26)	
         {
         	
         	if(i-2<0)
         	dp[i]+=dp[0];
         	else
         	dp[i]+=dp[i-2];
         }
         
         i++;	
      }
      cout<<dp[len-1]<<endl;
      cin>>s;
   }
   return 0;
}
