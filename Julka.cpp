//https://www.spoj.com/problems/JULKA/
//@bl1nd_m0n3y

#include<bits/stdc++.h>
using namespace std;

string findSum(string str1, string str2){ 
    if(str1.length()>str2.length()) 
        swap(str1,str2); 
    string str=""; 
    int n1=str1.length(),n2=str2.length(); 
    reverse(str1.begin(),str1.end()); 
    reverse(str2.begin(),str2.end()); 
  
    int carry=0; 
    for(int i=0;i<n1;i++){ 
        int sum=((str1[i]-'0')+(str2[i]-'0')+carry); 
        str.push_back(sum%10+'0'); 
        carry=sum/10; 
    } 
    for(int i=n1;i<n2;i++){ 
        int sum=((str2[i]-'0')+carry); 
        str.push_back(sum%10+'0'); 
        carry=sum/10; 
    } 
    if(carry) 
        str.push_back(carry+'0'); 
        
    reverse(str.begin(),str.end()); 
  
    return str; 
} 


string longDivision(string number,int divisor) { 
    string ans; 
    int idx=0; 
    int temp=number[idx]-'0'; 
    while(temp<divisor) 
       temp=temp*10+(number[++idx]-'0'); 
    while(number.size()>idx){ 
        ans+=(temp/divisor)+'0'; 
        temp=(temp % divisor)*10+number[++idx]-'0'; 
    } 
    if(ans.length()==0) 
        return "0"; 
    return ans; 
} 


bool isSmaller(string str1,string str2){ 
    int n1=str1.length(),n2=str2.length(); 
  
    if (n1<n2) 
    return true; 
    if (n2<n1) 
    return false; 
  
    for(int i=0;i<n1;i++) 
    if (str1[i]<str2[i]) 
        return true; 
    else if (str1[i]>str2[i]) 
        return false; 
  
    return false; 
} 
  


string findDiff(string str1,string str2){ 
    if (isSmaller(str1,str2)) 
        swap(str1,str2); 
  
    string str=""; 
  
    int n1=str1.length(),n2=str2.length(); 
  
    reverse(str1.begin(),str1.end()); 
    reverse(str2.begin(),str2.end()); 
      
    int carry = 0; 
    for(int i=0;i<n2;i++){ 
        int sub=((str1[i]-'0')-(str2[i]-'0')-carry); 
        if(sub<0){ 
            sub=sub+10; 
            carry=1; 
        } 
        else
            carry=0; 
  
        str.push_back(sub+'0'); 
    } 
    for(int i=n2;i<n1;i++){ 
        int sub=((str1[i]-'0')-carry); 
        if(sub<0){ 
            sub=sub+10; 
            carry=1; 
        } 
        else
            carry=0; 
              
        str.push_back(sub+'0'); 
    } 
    reverse(str.begin(),str.end()); 
    return str; 
} 


int main(){
	int t=10;
	while(t--){
		string sum,diff,x,y;
		cin>>sum>>diff;
		x=longDivision(findSum(sum,diff),2);
		y=findDiff(sum,x);
		y.erase(0,min(y.find_first_not_of('0'),y.size()-1));
		cout<<x<<endl<<y<<endl;
		
	}
}
