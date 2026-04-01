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
        for(int i=0;i<n;i++)
        {
            if(n%2==0)
            {
            if(A[i]+A[i++]==A[i++]+A[i++])
            count=1;
            }
            else {
                if(A[i]+A[i+1]==A[i++])
                count=1;


            }
            
        }
        
        if(count==1 || n==2)
        cout<<"YES\n";
        else 
        cout<<"NO\n";
    }
}