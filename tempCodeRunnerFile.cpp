#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(n==1 && arr[0]==1)
    return 0;
    if(n==1 && arr[0]==0)
    return 1;
    int cons_zero=0,maxi=-1,ones=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        cons_zero++;
        else
        cons_zero=0;
        maxi=max(cons_zero,maxi);

        if(arr[i]==1)
        ones++;
    }
    cout<<ones+maxi<<endl;
}
