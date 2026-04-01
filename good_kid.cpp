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
        long long int p=1;
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
       int min=0;
       for(int i=0;i<n;i++)
       {
          if(A[min]>A[i])
          min=i;
       }
       A[min]++;
       for(int i=0;i<n;i++)
       {
        p*=A[i];
       }
       cout<<p<<endl;
    }
}
