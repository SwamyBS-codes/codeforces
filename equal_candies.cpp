#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        int min=A[0],max=A[0];
        for(int i=0;i<n;i++)
        {
            if(min>A[i])
            {
            min=A[i];
            }
        }
        for(int i=0;i<n;i++)
        {
            A[i]=A[i]-min;
            count+=A[i];
        }
        
        cout<<count<<endl;
        }
}