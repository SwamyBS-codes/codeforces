#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<char>input;
    int n,k;
    cin>>n>>k;
    int val=n;
    while(n--)
    {
        char ele;
        cin>>ele;
        input.push_back(ele);
    }
    int count=0;
    for(int i=k;i<val;i++)
    {
       if(input[i]=='T' && input[i-k]=='P')
        count++;
    }
    cout<<count;

}