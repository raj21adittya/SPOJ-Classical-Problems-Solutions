//https://www.spoj.com/problems/INVCNT/
//bl!nd_m0n3y
//reference---https://www.geeksforgeeks.org/counting-inversions/
//reference---https://www.geeksforgeeks.org/count-inversions-array-set-3-using-bit/


#include<bits/stdc++.h> 
using namespace std; 
  
int getSum(int BITree[], int index) 
{ 
    int sum = 0;
  
    while (index > 0) 
    { 
        sum += BITree[index]; 
  
        index -= index & (-index); 
    } 
    return sum; 
} 
  
void updateBIT(int BITree[], int n, int index, int val) 
{ 
    while (index <= n) 
    { 
       BITree[index] += val; 
  
       index += index & (-index); 
    } 
} 
  
void convert(int arr[], int n) 
{ 
    int temp[n]; 
    for (int i=0; i<n; i++) 
        temp[i] = arr[i]; 
    sort(temp, temp+n); 
  
    for (int i=0; i<n; i++) 
    { 
        arr[i] = lower_bound(temp, temp+n, arr[i]) - temp + 1; 
    } 
} 
  
long long getInvCount(int arr[], int n) 
{ 
    long long  invcount = 0; 
  
    convert(arr, n); 
  
    int BIT[n+1]; 
    for (int i=1; i<=n; i++) 
        BIT[i] = 0; 
  
    for (int i=n-1; i>=0; i--) 
    { 
        invcount += getSum(BIT, arr[i]-1); 
  
        updateBIT(BIT, n, arr[i], 1); 
    } 
  
    return invcount; 
} 
  
int main() 
{ 
   int t;
   cin>>t;
   while(t--){
   	int n;
   	cin>>n;
   	int arr[n];
   	for(int i=0;i<n;i++)
   	cin>>arr[i];
   	cout<<getInvCount(arr,n)<<endl;
   }
   
} 
