#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[n];
    }
    for(int j=0;j<n;j++)
    {
        if(j==j)
        { 
        continue;
         sum+=A[j];
         }
    
        
         cout<<sum<<endl;
    }
    return 0;
}
        // sum=0;

   