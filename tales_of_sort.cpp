#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        int A[n],B[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        sort(A,A+n);
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)

            {
                while(A[0]!=0)
                {
            B[i]=A[j]-1;
            A[0]--;
            }
            }
            count++;
         }
    cout<<count++<<endl;
    }
}