//https://www.spoj.com/problems/BYECAKES/
//@bl1nd_m0n3y

#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
	int e,f,s,m,ed,fd,sd,md;
	cin>>e>>f>>s>>m>>ed>>fd>>sd>>md;
	while(e!=-1){
        int n=max(max(max((e+ed-1)/ed,(f+fd-1)/fd),(s+sd-1)/sd),(m+md-1)/md);
        cout<<ed*n-e<<" "<<fd*n-f<<" "<<sd*n-s<<" "<<md*n-m<<endl;
        
		cin>>e>>f>>s>>m>>ed>>fd>>sd>>md;
	}
}
