//https://www.spoj.com/problems/NY10A/
//@bl!nd_m0n3y


#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int count[8];
		int x;
		memset(count,0,sizeof(count));
		string s;
		cin>>s;
		map<char,int> convert;
		convert['H']=1;
		convert['T']=0;
		for(int i=0;i<38;i++)
		{
			int p=convert[s[i]];
			int q=convert[s[i+1]];
			int r=convert[s[i+2]];
			count[r+2*q+4*p]++;
		}
		cout<<n<<" ";
		for(int i=0;i<8;i++)
			cout<<count[i]<<" ";
		cout<<endl;
	}
}
