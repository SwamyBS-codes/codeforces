#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long int a,b,c;
        cin>>a>>b>>c;
        if((a+b-c)%2!=0)
            cout<<"First\n";
                           
        else 
        cout<<"Second\n";
    }
        
    }
