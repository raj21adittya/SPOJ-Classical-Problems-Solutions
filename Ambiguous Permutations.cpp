//https://www.spoj.com/problems/PERMUT2/
//@bl!nd_m0n3y



#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n!=0){
		int a[n+1];
		a[0]=0;
		for(int i=1;i<=n;i++)
		cin>>a[i];
		int count=0;
		for(int i=1;i<=n;i++){
			if(a[a[i]]==i)
			count++;
			else
			break;
		}
		if(count==n)
		cout<<"ambiguous"<<endl;
		else
		cout<<"not ambiguous"<<endl;
		cin>>n;
	}
}
