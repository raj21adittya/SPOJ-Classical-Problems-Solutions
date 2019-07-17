//https://www.spoj.com/problems/EC_CONB/
//@bl1nd_m0n3y


#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
  	int n;
    cin>>n;
    vector<int> br;
    if(n%2==0){
    	while(n!=0){
    		br.push_back(n%2);
    		n/=2;
    	}
    	//for(int i=0;i<br.size();i++)
    	//cout<<br[i];
    	int ans=0;
    	for(int i=br.size()-1,j=0;i>=0,j<br.size();i--,j++){
    		ans+=(br[i]*(pow(2,j)));
    	}
    	cout<<ans<<endl;
    }
    else{
    	cout<<n<<endl;
    }
  }
}
