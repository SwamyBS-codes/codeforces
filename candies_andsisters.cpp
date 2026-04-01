
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   int t;
   cin>>t;
   while(t--)
   {
       long long n;
       int count=0;
       cin>>n;
       int temp=n;
       int A[n];
         for(int i=0;i<n;i++)
       {
           A[i]=temp--;
       }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(n==A[i]+A[j])
            count++;
        }
   }
   cout<<count<<endl;
   }

    return 0;
}