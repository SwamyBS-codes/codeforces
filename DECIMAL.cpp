#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int n,i=0;
    string str="",str2="";
    cin>>n;
    int result=0,rem=0;
    while(n!=0)
    {
        rem=n%2;
        
    str+=to_string(rem);
        n=n/2;
    }
  reverse(str.begin(),str.end());
  cout<<str<<endl;

  
  int bit=0;
  int l=str.length();
 for(int i=l-1;i>=0;i--)
 {
    if(str[i]=='1')
    {
        result+=pow(2,bit);
    }
    bit++;
 }
  
  cout<<result<<endl;
}