#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int A[8];
    for(int i=0;i<8;i++)
    {
        cin>>A[i];
    }
    int a1,a2,a3,a4,min;
    a1=A[1]*A[2]/A[6];
    a2=A[3]*A[4];
    a3=A[5]/A[7];
    a1=a1/A[0];
    a2=a2/A[0];
    a3=a3/A[0];
    if(a1<a2 && a1<a3)
    min=a1;
    else if(a2<a3 && a2<a1)
    min=a2;
    else 
    min=a3;
    cout<<min<<endl;

}