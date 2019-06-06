//https://www.spoj.com/problems/STPAR/
//@bl!nd_m0n3y
//reference-----https://www.algorithmist.com/index.php/SPOJ_STPAR

#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin>>n;
	while(n!=0){
    	int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		stack<int> s;
		int need=1;
		bool ans=true;
		for(int i=0;i<n;i++){
			if(!s.empty() && s.top()<a[i]){
				ans=false;
				break;
			}
			else if(a[i]==need)
			need++;
			else
			s.push(a[i]);
			while(!s.empty() && s.top()==need){
				need++;
				s.pop();
			}
		}
		if(ans)
		cout<<"yes"<<endl;
		else
		cout<<"no"<<endl;
		
		
		cin>>n;
	}
}
