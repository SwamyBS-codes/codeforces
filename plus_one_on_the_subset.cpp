#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> st;
        while(n--)
        {
            int ele;
            cin>>ele;
            st.push_back(ele);
        }
        //  for(int c:st)
        //  {
        //     cout<<c<<" ";
        //  }
        int mini=*min_element(st.begin(),st.end());
           int maxi=*max_element(st.begin(),st.end());
        cout<<maxi-mini<<endl;
    }
}