#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int A[n];
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int k=0;
    for(j=0;j<n;j++)
    {
        A[k++]*=A[j];
    }
    for(i=0;i<n;i++)
    {
        cout<<A[i];
    }
   
}