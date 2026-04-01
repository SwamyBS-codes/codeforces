#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int a,b;
    cin>>a>>b;
    int c;
    if(a>b)
    c=a%b;
    else 
    c=b%a;
    cout<<c<<endl;
    }
}