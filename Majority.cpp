//https://www.spoj.com/problems/MAJOR/
//@bl1nd_m0n3y



#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		cin>>arr[i];
		map<int,int> freq;
		for(int i=0;i<n;i++)
		freq[arr[i]]++;
		int count=0;
		for(auto j:freq){
			if(j.second>n/2){
				count=1;
				cout<<"YES "<<j.first<<endl;
				break;
			}
		}
		if(count==0)
		cout<<"NO"<<endl;
	}
}
