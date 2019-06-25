//https://www.spoj.com/problems/AIBOHP/
//bl1nd_m0n3y
//refernce---https://www.youtube.com/watch?v=DOnK40BvazI
//reference---https://www.geeksforgeeks.org/minimum-insertions-to-form-a-palindrome-dp-28/


#include <bits/stdc++.h> 
using namespace std; 
  
int findMinInsertions(string str, int n)  
{  
    int dp[n][n], l, h, len;  
    memset(dp, 0, sizeof(dp));  
    for (len= 1; len < n;len++)  
        for (l = 0, h = len; h < n; l++,h++)  
            dp[l][h] = (str[l] == str[h])?  
                        dp[l + 1][h - 1] :  
                        (min(dp[l][h - 1],  
                             dp[l + 1][h]) + 1);  
  
    return dp[0][n - 1];  
}  

int main() {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<findMinInsertions(s,s.length())<<endl;
		
	}
}


