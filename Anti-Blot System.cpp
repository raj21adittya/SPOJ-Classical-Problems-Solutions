//https://www.spoj.com/problems/ABSYS/
//@bl1nd_m0n3y

#include <iostream> 
#include <string> 
#include<bits/stdc++.h>
using namespace std; 

int isSubstring(string s2) 
{ 
	string s1="machula";
    int M = s1.length(); 
    int N = s2.length(); 
    for (int i = 0; i <= N - M; i++) { 
        int j; 
        for (j = 0; j < M; j++) 
            if (s2[i + j] != s1[j]) 
                break; 
  
        if (j == M) 
            return i; 
    } 
  
    return -1; 
} 


int main () 
{ 
	int t;
	cin>>t;
	while(t--){
		string s1,s2,s3,s4,s5;
		cin>>s1>>s2>>s3>>s4>>s5;
		if(isSubstring(s1)!=-1){
			int x=stoi(s5)-stoi(s3);
			cout<<x<<" + "<<s3<<" = "<<s5<<endl; 
		}
		else if(isSubstring(s3)!=-1){
			int x=stoi(s5)-stoi(s1);
			cout<<s1<<" + "<<x<<" = "<<s5<<endl;
		}
		else{
			int x=stoi(s1)+stoi(s3);
			cout<<s1<<" + "<<s3<<" = "<<x<<endl;
		}
		
	}
} 
