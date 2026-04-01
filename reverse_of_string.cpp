#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    string name1,name2;
    //cout<<"Enter your name:";
    cin>>name1>>name2;
    int length=name1.length();
    
    reverse(name2.begin(), name2.end());
    
      if(name1==name2)
      cout<<"YES";
      else if(name1==name2 || name1!=name2)
      cout<<"NO";
}
       
   

