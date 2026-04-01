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
        int A[n];
        int temp=n;
        
        for(int i=0;i<n;i++)
        {
            A[i]=temp--;
        }
        int B[n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                B[j]=__gcd(A[i],A[j]);
                
            }
            
        }
        int max=B[0];
        for(int i=0;i<n;i++)
        {
            if(max>B[i])
            max=B[i];
            cout<<B[i]<<" ";
        }
        cout<<endl<<max<<endl;
    }
}
    