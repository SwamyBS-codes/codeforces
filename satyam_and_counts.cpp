#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int triangle=n;
        // cout<<triangle;
        while(n--)
        {
            int x,y;
            cin>>x>>y;
            if(x==0 && y==0)
            triangle--;
            // cout<<triangle;
        }
        
        if(triangle<3)
        cout<<0<<endl;
        else if(triangle==3)
        cout<<1<<endl;
        else 
        cout<<triangle-1<<endl;
    }
}