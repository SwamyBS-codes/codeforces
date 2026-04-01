#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,t;
    cin>>t;
    while(t--)
    {
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<n;i++)
    {
        sum+=A[i];
    }
    cout<<sum<<endl;
    }
}