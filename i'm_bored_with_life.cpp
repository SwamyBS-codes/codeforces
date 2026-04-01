#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b;
    long long  fact1=1,fact2=1;
    cin>>a>>b;
    for(int i=1;i<=a;i++)
    {
        fact1*=i;
    }
    for(j=1;j<=b;j++)
    {
        fact2*=j;
    }
    int gcd1=__gcd(fact1,fact2);
    cout<<gcd1<<endl;
}