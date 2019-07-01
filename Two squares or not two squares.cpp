//https://www.spoj.com/problems/TWOSQRS/
//bl1nd_m0n3y



#include <bits/stdc++.h>
using namespace std;
#define LL long long

bool sumSquare(LL n) { 
for (int i=2;i<=sqrt(n);i++){ 
    LL count=0; 
    if(n%i==0){
        while (n%i==0){ 
            count++; 
            n/=i; 
        }
        if(i%4==3&&count%2!=0) 
            return false; 
    } 
}
return n%4!=3; 
} 

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(sumSquare(n)==true)
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
		
	}
}
