#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,s1=0,s2=0;
        cin>>n;
       long long int A[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        for(int i=0;i<n;i++)
        {
            if(A[i]<=0)
            {
                s1+=A[i];
            }
            else 
            s2+=A[i];
        }
     int s3=abs(s2)-abs(s1);
        cout<<abs(s3)<<endl;
    }
}