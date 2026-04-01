#include<iostream>
using namespace std;
int main()
{
    int i=1,fact=1,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    cout<<fact;
}