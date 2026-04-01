#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    int A[n],B[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<n;i++)
    {
        B[i]=abs(A[i]);
    }
    sort(B,B+n);
    cout<<B[0]<<endl;
}