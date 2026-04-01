#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    sort(A,A+n);
    cout<<"smallest nuber is "<<A[0]<<endl;
    cout<<"largest number is"<<A[n-1]<<endl;
}