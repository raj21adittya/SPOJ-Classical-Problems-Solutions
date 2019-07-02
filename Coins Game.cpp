//https://www.spoj.com/problems/MCOINS/en/
//@bl1nd_m0n3y
//reference---https://www.topcoder.com/community/competitive-programming/tutorials/algorithm-games/



#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll n,m,maxi=0,k,l;
    cin>>k>>l>>m;
    int arr[m];
    for(int i=0;i<m;i++){
        ll x;
        cin>>x;
        if(x>maxi)
            maxi=x;
        arr[i]=x;
    }
    int dp[maxi+2];
    memset(dp,0,sizeof(dp));
    dp[1]=1;
    for(int i=2;i<=maxi;i++){
        if(!dp[i-1])
            dp[i]=1;
        if(i-k>=0 && !dp[i-k])
            dp[i]=1;
        if(i-l>=0 && !dp[i-l])
            dp[i]=1;
    }
    for(int i=0;i<m;i++){
        if(dp[arr[i]])
            cout<<"A";
        else cout<<"B";
    }
}
