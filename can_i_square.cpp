#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,sum=0;
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
        long long int ans=sqrt(sum);
        if(ans*ans==sum)
        cout<<"YES\n";
        else 
        cout<<"NO\n";
         
    }
}