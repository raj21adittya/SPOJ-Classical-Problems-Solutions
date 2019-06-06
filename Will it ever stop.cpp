//https://www.spoj.com/problems/WILLITST/
//@bl!nd_m0n3y

#include<bits/stdc++.h>
using namespace std;

//just check if n is a power of 2 LOL

int main(){
	long long n;
	cin>>n;
	if(n>1&&ceil(log2(n))==floor(log2(n)))
    cout<<"TAK";
    else 
    cout<<"NIE";
}


