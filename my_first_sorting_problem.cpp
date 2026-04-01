#include<iostream>
using namespace std;
int main()
{
    int t,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(x>y)
        {
        int a=x;
           x=y;
           y=a;
        }
           cout<<x<<" "<<y<<endl;
           //cout<<"\n";
    }
}