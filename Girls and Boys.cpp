//https://www.spoj.com/problems/GIRLSNBS/
//@bl!nd_m0n3y
//reference--http://spoj-sus.blogspot.com/2015/07/girlsnbs.html

#include<bits/stdc++.h>
using namespace std;

int main(){
	int g,b;
	cin>>g>>b;
	while(g!=-1 && b!=-1){
		int x,y;
		if(g==b){
			if(g==0)
			cout<<0<<endl;
			else
			cout<<1<<endl;
		}
		else{
			if(g>b){
				y=b;
				x=g;
			}
			else{
				y=g;
				x=b;
			}
			if(x%(y+1)==0)
			cout<<x/(y+1)<<endl;
			else
			cout<<(x/(y+1))+1<<endl;
		}
		cin>>g>>b;
	}
}
