#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int A[3];
    for(int i=0;i<3;i++)
    {
        cin>>A[i];
    }
    int max=A[0],min=A[0];
    for(int i=0;i<3;i++)
    {
        if(max<A[i])
        max=A[i];
        else if(min>A[i])
        min=A[i];
    }
    cout<<(max-min)<<endl;

}