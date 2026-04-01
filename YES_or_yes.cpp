#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
     string str1="yEs",str2="YeS",str3="YES",str4="yes",str5="YEs",str6="yeS",str7="yES",str8="Yes",str;
    while(t--)
    {
        cin>>str;
   
   // cin>>str;
    if(str==str1 || str==str2 || str==str3 || str==str4 || str==str5 || str==str6 ||str==str7 || str==str8)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    }
    return 0;
}

    
