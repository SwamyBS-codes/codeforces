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
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n-i-1;j++)
            {
                if(A[j]>A[j+1])
                {
                    int temp=A[j];
                    A[j]=A[j+1];
                    A[j+1]=temp;
                    count++;
                }
                
            }
        }
        cout<<count<<endl;
    }
}