#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string n1,n2;
        cin>>n1>>n2;
           string temp;
           temp[0]=n1[0];
           n1[0]=n2[0];
           n2[0]=temp[0];
             cout<<n1<<" "<<n2<<endl;
             
    }
  
}