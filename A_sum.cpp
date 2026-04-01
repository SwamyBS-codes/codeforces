#include<iostream>
using namespace std;
int main()
{
    int a,b,c,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if((a+b)==c || (a+c)==b || (b+c)==a)
        {
            cout<<"YES\n";
        }
        else
        cout<<"NO\n";
    }
    return 0;
    }
