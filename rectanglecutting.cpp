#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0,count1=0;
        cin>>n;
        int A[n],B[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        for(int i=0;i<n;i++)
        {
            if(A[i]==0)
            {
            count++;
            count1=max(count1,count);
            }
            else 
            count=0;
           }
        cout<<count1<<endl;
        
        
    }
}