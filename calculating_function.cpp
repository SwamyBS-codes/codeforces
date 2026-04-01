#include<iostream>
using namespace std;
int main()
{
    long long  w;
    cin>>w;
    if(w%2==0)
    cout<<w/2;
    else 
    cout<<-(w+1)/2;
    return 0;
}