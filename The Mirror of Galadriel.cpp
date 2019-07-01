//https://www.spoj.com/problems/AMR12D/
//bl1nd_m0n3y


#include<bits/stdc++.h>
using namespace std;

bool checkPalin(string s){
	int l=s.length();
	for(int i=0;i<l;i++){
		if(s[i]!=s[l-1-i]){
			return false;
		}
	}
	return true;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(checkPalin(s))
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
}
