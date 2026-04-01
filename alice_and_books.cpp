#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int A[n],B[n]={0};
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        sort(A,A+n);
        int x=0;
         for(int i=0;i<n;i++)
         {
            if(A[n-1]>A[i])
            {
                x=A[i];
                 break;
            }
         }
         int ans=x+A[n-1];
         cout<<ans<<endl;
    }
        
}