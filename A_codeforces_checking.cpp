#include<iostream>
using namespace std;
int main()
{
    int t;
    char var;
 string str="codeforces";
 cin>>t;
    while(t--)
    {
        bool found=false;
       cin>>var;
       for(int i=0;i<=10;i++)
       {
         if(str[i]==var)
         {
            found=true;
            cout<<"YES"<<endl;;
            break;
         }
         if(i==9)
         {
            cout<<"NO"<<endl;;
            break;
         }
       }

         
         
      
    }
}