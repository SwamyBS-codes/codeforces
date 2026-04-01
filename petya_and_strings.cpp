#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1,s2,s3="",s4="";
    cin>>s1>>s2;
    int l=s1.length();
    int l2=s2.length();
   for(char c:s1)
   { 
      if(isupper(c))
      {
       s3+=tolower(c);
      }
      else 
      s3+=c;
   }
   for(char c1:s2)
   {
    if(isupper(c1))
    {
    s4+=tolower(c1);
    }
    else 
    s4+=c1;
   }
   if(s3<s4)
   cout<<"-1\n";
   else if(s3>s4)
   cout<<"1\n";
   else 
   cout<<"0\n";
}