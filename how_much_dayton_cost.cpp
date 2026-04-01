#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int A[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        bool found=false;
        for(int i=0;i<n;i++)
        {
            if(A[i]==k)
            found=true;
        }
        if(found)
        cout<<"YES\n";
        else 
        cout<<"NO\n";
    }
}