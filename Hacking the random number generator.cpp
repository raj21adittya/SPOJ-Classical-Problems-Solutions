//https://www.spoj.com/problems/HACKRNDM/
//@bl1nd_m0n3y

#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int binarySearch(int arr[],int start,int end,int x){
	if(end>=start){
	int mid=start+(end-start)/2;
	if(arr[mid]==x)
		return mid;
	if(arr[mid]>x)
		return binarySearch(arr,start,mid-1,x);
		
	return binarySearch(arr,mid+1,end,x);
	}
	return -1;
}


int main(){
	int n,k,ans=0;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	sort(arr,arr+n);
	for(int i=0;i<n-1;i++){
		if(binarySearch(arr,i+1,n-1,arr[i]+k)!=-1){
			ans++;
		}
		if(binarySearch(arr,i+1,n-1,arr[i]-k)!=-1){
			ans++;
		}
	}
	cout<<ans<<endl;
}
