#include<iostream>
using namespace std;
int main()
{
    string lab,lab1="";
    cin>>lab;
    int l=lab.length();
    for(int i=0;i<l;i++)
    {
        if(lab[i]=='-')
        lab1+=62;
        else if(lab[i]=='_')
        lab1+=63;
       else if(isupper(lab[i]))
         lab1+=int(lab[i])-55;
         else if(islower(lab[i]))
         lab1+=int(lab[i])-61;


    }
    int x=int(lab1)-58;
    cout<<x<<endl;
}