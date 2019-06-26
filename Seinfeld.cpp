//https://www.spoj.com/problems/ANARC09A/
//bl1nd_m0n3y
//reference---http://strangeonehere.blogspot.com/2018/04/spoj-anarc09a-solution-c.html


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t=0;
    string s;
    while(1)
    {
        cin>>s;
        if(s[0]=='-') break;
        int a=0,b=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='{')
            a++;
            if(s[i]=='}'&&a>0)
            a--;
            else if( s[i]=='}'&&a<=0 ) {
            	b++;
            	a++; 
            	
            }
        }
        b=b + ceilf(a/2.00);
        printf("%d. %d\n",++t,b);
    }
}
