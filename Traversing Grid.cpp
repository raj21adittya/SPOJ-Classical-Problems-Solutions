//https://www.spoj.com/problems/TRGRID/
//bl1nd_m0n3y


#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
    	ll n,m;
        cin>>n>>m;
        if(n%2==0 && m%2==0){
            if(n>m){
             cout<<"U"<<endl; 
            }else if(m>=n)
                    cout<<"L"<<endl; 
        }
        else if(n%2!=0 && m%2!=0){
            if(n>m)
                cout<<"D"<<endl; 
            else if(m>=n)
                cout<<"R"<<endl; 
        }
        else{
            if(n%2==0 && m%2!=0)
                {
                    if(n>m)
                        cout<<"D"<<endl; 
                    else
                        cout<<"L"<<endl; 
                }
            if(n%2!=0 && m%2==0)
                {
                    if(n<m)
                        cout<<"R"<<endl; 
                    else
                        cout<<"U"<<endl; 
                }
        }
    }
    return 0;
}
