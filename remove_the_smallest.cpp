#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,abdiff=0;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        sort(A.begin(),A.end());
        bool found=true;
        for(int i=1;i<n;i++)
        {
            if(A[i]-A[i-1]>1)
            {
                found=false;
                break;
            }
        }
            if(found)
            cout<<"YES\n";
            else 
            cout<<"NO\n";
        }
    }
