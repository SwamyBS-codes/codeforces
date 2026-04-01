#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int s1,s2,s3,s4,max1,max2,min1,min2;
    cin>>s1>>s2>>s3>>s4;
    if(s1>s2)
    {
    max1=s1;
    min1=s2;
    }
    else 
    {
    max1=s2;
    min1=s1;
    }
    
    if(s3>s4)
    {
    max2=s3;
    min2=s4;
    }
    else 
    {
    max2=s4;
    min2=s3;
    }
        
    if(min1<max2 && max1>min2)
    cout<<"YES\n";
    else 
    cout<<"NO\n"; 
    }   

    
}