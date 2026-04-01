#include<iostream>
using namespace std;
int main()
{
    int n,p,q,count=0;
    cin>>n;
    while(n--)
    {
        cin>>p>>q;
         if((p+2)<=q)
            {
            count++;
            }
    }
    cout<<count<<endl;
}