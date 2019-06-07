//https://www.spoj.com/problems/CANTON/
//@bl!nd_m0n3y


    #include <bits/stdc++.h>
    using namespace std;
    int main() {
         int t;
         cin>>t;
         while(t--)
         {
         	int n;
         	cin>>n;
         	int sum=n,a=1,x,y,count=0;
         	while(sum>0){
         		sum-=a;
         		a++;
         		count++;
         	}
         	int diag=count;
         	
         	if(diag%2==0){
         		y=abs(sum)+1;
         		x=diag+1-y;
         	}
         	else{
         		x=abs(sum)+1;
         		y=diag+1-x;
         	}
         	
         	cout<<"TERM "<<n<<" IS "<<x<<"/"<<y<<endl;
         }
         
         return 0;
    }
