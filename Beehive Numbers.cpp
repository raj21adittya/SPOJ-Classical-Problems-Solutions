//https://www.spoj.com/problems/BEENUMS/
//@bl!nd_m0n3y

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n!=-1)
    {
        if(n%2)
        {
            n--;
            if(n%3==0)
            {
                n/=3;
                n=n*4+1;
                int t=sqrt(n);
                if(t*t==n)
                {
                    if(t%2)
                        cout<<"Y"<<endl;
                    else
                        cout<<"N"<<endl;
                }
                else
                    cout<<"N"<<endl;
            }
            else
                cout<<"N"<<endl;
        }
        else
            cout<<"N"<<endl;
        cin>>n;
    }
}
