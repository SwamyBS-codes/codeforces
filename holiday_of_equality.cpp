#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int A[n],B[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int k=0;
    for(int i=0;i<n;i++)
    {
        bool found=false;
        for(int j=0;j<i;j++)
        {
            if(A[i]==A[j])
            {
                found=true;
                break;
            }
        }
        if(!found)
        B[k++]=A[i];
    }
    for(int i=0;i<k;i++)
    {
        sum+=B[i];
    }
    if(n==1)
    cout<<0<<endl;
    else
    cout<<sum<<endl;
}