//https://www.spoj.com/problems/NOTATRI/
//@bl1nd_m0n3y

#include <bits/stdc++.h>
using namespace std;
#define ll long long 


/*int findNoGreater(int arr[],int n,int x){
	int start=0;
	int end=n-1;
	int leftGreater=n;
	while(start<=end){
		int mid=start+(end-start)/2;
		if(arr[mid]>x){
			leftGreater=mid;
			end=mid-1;
		}
		else
		start=mid+1;
	}
	return (n-leftGreater);
}
*/

int main(){
	while(1){
		int n;
     	cin>>n;
     	
     	if(n==0)
     	break;
     	
     	int ans=0;
		int arr[n];
		for(int i=0;i<n;i++)
		cin>>arr[i];
		sort(arr,arr+n);
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				int z=arr[i]+arr[j];
				int count=upper_bound(arr+j+1,arr+n,z)-arr;
				if(arr[count]==arr[i]+arr[j])
				count++;
				ans+=(n-count);
			}
		}
		cout<<ans<<endl;
	}
}
