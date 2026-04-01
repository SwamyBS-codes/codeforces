#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
       int result1=(n/2)*b+(n%2)*a;
       int result2=n*a;
       cout<<min(result1,result2)<<endl;
}
}