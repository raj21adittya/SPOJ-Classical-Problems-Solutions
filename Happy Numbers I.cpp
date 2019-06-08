//https://www.spoj.com/problems/HPYNOS/
//@bl!nd_m0n3y



#include<bits/stdc++.h>
using namespace std;

#define LL long long
LL breakNum(LL n){
	LL ans=0;
	while(n>0){
		ans+=((n%10)*(n%10));
		n/=10;
	}
	return ans;
}
LL happyNumber(LL n){
	map<LL,bool> visited;
	LL count=0;
	while(n!=1){
		visited[n]=true;
		n=breakNum(n);
		count++;
		if(visited[n]==true)
		return -1;
		
	}
	return count;
}

int main(){
	LL n;
	cin>>n;
	cout<<happyNumber(n);
}
