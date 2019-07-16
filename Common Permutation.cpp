//https://www.spoj.com/problems/CPRMT/
//bl1nd_m0n3y

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string a;
    while(cin>>a){
        string b;
        cin>>b;
        ll arr[26]={0};
        ll arr2[26]={0};
        for(ll i=0;i<a.size();i++)
            arr[a[i]-'a']++;
        for(ll i=0;i<b.size();i++)
            arr2[b[i]-'a']++;
         
        for(ll i=0;i<26;i++){
            ll ans=min(arr[i],arr2[i]);
            for(ll j=0;j<ans;j++){
                cout<<char(i+'a');
            }
        }
        cout<<endl;
    }
}
