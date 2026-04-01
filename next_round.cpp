#include<iostream>
using namespace std;
int main()
{
    int n,m,count=0,count1=0;
    cin>>n>>m;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<n;i++)
    {
        if(A[i]==0)
        count1++;
    }
    if(count1==n)
    {
        cout<<0<<endl;
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        if(A[m]>=A[m+1])
        {
            if(i<=m)
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
}