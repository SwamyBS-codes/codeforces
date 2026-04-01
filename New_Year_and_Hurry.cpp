#include<iostream>
using namespace std;
int main()
{
    int n,k,min=240,r=0,s=0,s1;
    cin>>n>>k;
      s1=240-k;
      int count=-1,i=1;
     while(r<=s1 && count<n)
     {
        r+=i*5;
        s=240-r;
        count++;
        i++;
     }
     cout<<count<<endl;
    
    }