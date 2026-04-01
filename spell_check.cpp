#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
       string name1,name2="Timur";
       cin>>name1;
       sort(name1.begin(),name1.end());
       sort(name2.begin(),name2.end());
       if(name1==name2)
       cout<<"YES\n";
       else 
       cout<<"NO\n";
    }
}
      