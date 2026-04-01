#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,rem=0,result=0;
        cin>>n;
        while(n!=0)
        {
            rem=n%10;
            result+=rem;
            n/=10;
        }
        cout<<result<<endl;
        
    }
}