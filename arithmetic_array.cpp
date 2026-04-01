#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,sum=0,a=0;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<n;i++)
    {
        if(A[i]<=0)
        a++;
    }
    for(int i=0;i<n;i++)
    {
        sum+=A[i]-1;
    }
    //cout<<sum<<endl;

     if(a>=1 && a!=0)
    cout<<1<<endl;
    else if(a==0 && sum==0)
    cout<<0<<endl;
    else
    cout<<sum<<endl;
    }
}