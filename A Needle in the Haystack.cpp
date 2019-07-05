//https://www.spoj.com/problems/NHAY/
//@bL1nd_m0n3y


#include <bits/stdc++.h> 
using namespace std;

#define ll long long


void calcLPS(string pat,ll M,ll lps[]) { 
	
	ll len=0; 
	lps[0]=0;

	ll i=1; 
	while(i<M){ 
		if(pat[i]==pat[len]){ 
			len++; 
			lps[i]=len; 
			i++; 
		} 
		else {
			if (len !=0){ 
				len=lps[len-1]; 
			} 
			else  { 
				lps[i] = 0; 
				i++; 
			} 
		} 
	} 
} 


void kmpAlgo(string pat,string txt){
	bool flag=false;
	ll M = pat.length(); 
	ll N = txt.length(); 
	ll lps[M]; 

	calcLPS(pat, M, lps); 

	ll i=0;  
	ll j=0; 
	while(i<N){ 
		if(pat[j]==txt[i]){ 
			j++; 
			i++; 
			
		} 
		if (j==M){ 
		    cout<<i-j<<endl; 
		    flag=true;
			j=lps[j-1]; 
		} 
		else if(i<N&& pat[j] !=txt[i]){ 
			if(j !=0) 
				j=lps[j-1]; 
			else
				i+=1;
		} 
	} 
	if(flag==false){
		cout<<endl;
	}
} 

int main(){
	ll n;
	while(cin>>n){
	    string pat,txt;
	    cin>>pat>>txt;
	    kmpAlgo(pat, txt); 
	}
	
} 
