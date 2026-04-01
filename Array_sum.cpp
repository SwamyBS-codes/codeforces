#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[n],B[n],sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                sum+=A[j];
            }

          
        }
         B[k++]=sum;
         sum=0;
        
    }
    int max=B[0],min=B[0];
    for(int i=0;i<n;i++)
    {
       if(max<B[i])
       {
       max=B[i];
    }
    else if(min>B[i])
    min=B[i];
    }

     
    cout<<min<<" "<<max;
    return 0;
}