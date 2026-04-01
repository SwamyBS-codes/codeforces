#include<iostream>
#include<bits/stdtr1c++.h>
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
    map<int,int> map;
    for(int i=0;i<n;i++)
    {
        map[A[i]]++;
    }
    for(auto c:map)
    {
        cout<<c.first<<"->"<<c.second<<endl;
    }

    int q;
    cin>>q;
    while(q--)
    {
        int number;
        cin>>number;
        cout<<map[number]<<endl;
    }
}