//https://www.spoj.com/problems/OLOLO/
//bl!Nd_m0n3y

#include<bits/stdc++.h>
using namespace std;

int main()
	{

	    long long n, i, num, result = 0;

	    cin>>n;

	    for(i=0; i< n; i++)

	    {

	        cin>>num;

	        result = result ^ num;

	    }

	    cout<<result<<endl;

	    return 0;

	}
