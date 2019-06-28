//https://www.spoj.com/problems/ARITH2/
//bl1nd_m0n3y

#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long x,y,ans;
		char z;
		long long flag=1,count=0;
		while(flag){
			count++;
			if(count==1)
				cin>>x;
			else
				x=ans;
			z=' ';
			while(z==' ')
			cin>>z;
			if(z=='='){
				cout<<ans<<endl;
				flag=0;
			}
			else
			cin>>y;
			switch(z){
				case '+':
				ans=x+y;
				break;
				case '-':
				ans=x-y;
				break;
				case '*':
				ans=x*y;
				break;
				case '/':
				ans=x/y;
				break;
				default:
				break;
			}
			
		}
	}
}
