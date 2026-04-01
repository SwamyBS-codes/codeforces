#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s,e,count=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>s>>e;
        
        if(s>e)
        count+=e;
        else if(s<=e)
        {
            count-=1;
        }
        }
        cout<<count<<endl;
        count=0;

    }
}