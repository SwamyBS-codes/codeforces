#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,b=0,m=0;
       cin>>n;
       int A[n];
       for(int i=0;i<n;i++)
       {
        cin>>A[i];
       
       }
       for(int i=0;i<n;i++)
       {
         if(A[i]%2==0)
        m+=A[i];
        else 
        b+=A[i];
       }
       //cout<<m<<" "<<b;
       if(m>b)
       cout<<"YES\n";
       else 
       cout<<"NO\n";
       

        }
       
       

    }
