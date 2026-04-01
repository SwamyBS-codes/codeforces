#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int count=0;
        //cin>>n;
        int A[4];
       for(int i=0;i<4;i++)
         {
           cin>>A[i];
          }
        for(int i=0;i<4;i++)
        {
            if(A[0]<A[i])
            count++;
            
        }
        cout<<count<<endl;
    }
}