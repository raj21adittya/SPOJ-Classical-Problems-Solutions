//https://www.spoj.com/problems/ABCDEF/
//@bl1nd_m0n3y


#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
	int n,ans=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	vector<int> vlhs;
	vector<int> vrhs;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				vlhs.push_back(arr[i]*arr[j]+arr[k]);
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				if(arr[k]==0){
					continue;
				}
				vrhs.push_back((arr[i]+arr[j])*arr[k]);
			}
		}
	}
	sort(vlhs.begin(),vlhs.end());
	sort(vrhs.begin(),vrhs.end());
	for(int l=0;l<vlhs.size();l++){
		int x=lower_bound(vrhs.begin(),vrhs.end(),vlhs[l])-vrhs.begin();
		int y=upper_bound(vrhs.begin(),vrhs.end(),vlhs[l])-vrhs.begin();
		ans+=abs(x-y);
	}
	cout<<ans;
	
}
