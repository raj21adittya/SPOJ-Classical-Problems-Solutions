//https://www.spoj.com/problems/ENIGMATH/
//bl!nd_m0n3y
//reference---https://www.geeksforgeeks.org/find-smallest-values-of-x-and-y-such-that-ax-by-0/


#include <bits/stdc++.h> 
using namespace std; 
 
int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return (gcd(b, a % b)); 
} 
void findSmallest(int a, int b) 
{ 
    int lcm = (a * b) / gcd(a, b); 
  
    cout<< lcm / a <<" "<< lcm / b;
} 
  
int main() 
{ 
    int t;
    cin>>t;
    while(t--){
    	int q,w;
    	cin>>q>>w;
    	findSmallest(q,w);
    }
} 
