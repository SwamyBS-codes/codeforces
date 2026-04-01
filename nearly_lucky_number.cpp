#include<iostream>
using namespace std;
int main()
{
    long long rem,count=0,l=0;
    long long n;
    cin>>n;
 
   while(n!=0)
   {
    rem=n%10;
    if(rem==7 || rem==4)
    {
    count++;
    }
     n=n/10;
    
   }
 //cout<<count<<endl;
   if(count==7 || count==4)
   cout<<"YES\n";
   else
   cout<<"NO\n";
}
    