#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int anton=0,danik=0,n;
    cin>>n;
    string name;
    cin>>name;
    int length=name.length();
    
    for(int i=0;i<n;i++)
    {
        if(name[i]=='A')
        anton++;
        else if(name[i]=='D')
        danik++;
    }
    if(anton>danik)
    cout<<"Anton";
    else if(danik>anton)
    cout<<"Danik";
    else if(anton==danik)
    cout<<"Friendship";


    }
