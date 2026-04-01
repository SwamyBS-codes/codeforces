#include<iostream>
using namespace std;
int main()
{
    int n,l=0,rem,max,count=0,temp,temp1,div1,div2;
    cin>>n;
    temp=n;
    temp1=temp;
    while(n!=0)
    {
        l++;
        n=n/10;
  }
    max=l;
   // cout<<l<<" "<<temp;
   
    while(temp!=0)
{ 
    rem=temp%10;
    if(rem==7 || rem==4)
    count++;
    temp=temp/10;

}
if(count==max)
{
cout<<"YES\n";
return 0;
}
if(temp1%4==0 || temp1%7==0 || temp1%47==0)
cout<<"YES\n";
else
cout<<"NO\n";
}