//https://www.spoj.com/problems/ETF/
//@bl!nd_m0n3y

//reference---https://www.geeksforgeeks.org/print-all-prime-factors-of-a-given-number/
//reference---https://www.geeksforgeeks.org/eulers-totient-function/

#include<bits/stdc++.h>
using namespace std;

int phi(int n) 
{ 
    int result = n; 
    for (int p = 2; p * p <= n; ++p) { 
          
        if (n % p == 0) { 
              
            while (n % p == 0) 
                n /= p; 
            result -= result / p; 
        } 
    } 
    if (n > 1) 
        result -= result / n; 
    return result; 
} 
int main()
{
    int n;
    cin>>n;
    while(n--)
    {int x;
    cin>>x;
    cout<<phi(x)<<endl;
    
    }
}

