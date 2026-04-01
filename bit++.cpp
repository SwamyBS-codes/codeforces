#include<iostream>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    string str;
    for(int i=0;i<n;i++)
    {
        cin>>str;
        if(str[1]=='+')
        c++;
       else
        c--;
    }
    
    cout<<c<<endl;
}

    