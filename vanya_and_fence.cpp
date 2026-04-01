#include<iostream>
using namespace std;
int main()
{
    int n,h,count=0;
    cin>>n>>h;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<n;i++)
    {
        if(A[i]<=h)
        {
            A[i]={1};
        }
        else
        A[i]={2};
    }
    for(int i=0;i<n;i++)
    {
        count+=A[i];
    }
    cout<<count<<endl;
}