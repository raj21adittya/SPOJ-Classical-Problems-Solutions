//https://www.spoj.com/problems/RPLC/
//@bl1nd_m0n3y


#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int t;
    cin>>t;
    for(int count=1;count<=t;count++){
        ll num,sum=0,coke=0;
        cin>>num;
        ll arr[num];
        for(int i=0;i<num;i++){
            cin>>arr[i];
            sum+=arr[i];
            if(sum<0){
                coke+=abs(sum);
                sum=0;
            }
        }
        cout<<"Scenario #"<<count<<": "<<coke+1<<endl;
    }
}
