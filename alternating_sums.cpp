#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count1=0,count2=0;
        cin>>n;
        int A[n];
        for(int i = 0; i < n; i++)
        {
           cin>>A[i];
        }
        for(int i=0;i<n;i++)
        {
            if(i%2!=0)
           {
            count1+=A[i];
           }
            else if (i%2==0)
           count2+=A[i];
        }
          if(n%2==0)
        cout<<-(count1-count2)<<endl;
        else 
         cout<<-(count1-count2)<<endl;
        
    }
}