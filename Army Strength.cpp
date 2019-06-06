//https://www.spoj.com/problems/ARMY/
//@bl1nd_m0n3y


#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t,ng,nm,i;

    cin>>t;

    cout<<endl;

    while(t--)

    {

        cin>>ng>>nm;

        int g[ng],m[nm];

        for(i=0;i<ng;i++)

            cin>>g[i];

        for(i=0;i<nm;i++)

            cin>>m[i];

        sort(g,g+ng);

        sort(m,m+nm);

        

            if(g[ng-1]>=m[nm-1])

            

                cout<<"Godzilla"<<endl;

                

            else

                cout<<"MechaGodzilla"<<endl;

        }

return 0;

}
