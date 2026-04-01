#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        string name;
        cin>>name;
        string name1="abc",name2="acb" ,name3="bac",name4="cba";
        if(name==name1 || name==name2 || name==name3 || name==name4)
        cout<<"YES\n";
        else
        cout<<"NO\n";
       // cout<<"\n";
    }
    return 0;
}
        