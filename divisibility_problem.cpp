#include<iostream>
using namespace std;

int main()
{
    int t,a,b,s,move;
    cin >> t;
     for(int i=0;i<t;i++)
     {
        
          cin>>a>>b;
          s=a%b;
          if(s==0)
          cout<<"0\n";
          else
         cout<<b-s<<endl;

     }
    
}