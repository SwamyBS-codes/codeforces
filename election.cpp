#include <iostream>
#include <algorithm>
using namespace std;

int main() {
   int t,a,b,c,vote_a=0,vote_b=0,vote_c=0;
   cin>>t;
   for(int i=0;i<t;i++)
   {
    cin>>a>>b>>c;
      int high=max({a,b,c});
     // cout<<high<<endl;
      if(a==0 && b==0 && c==0)
      {
        vote_a=1,vote_b=1,vote_c=1;
      
      }

      if(high!=a)
      {
      vote_a=high-a+1;
      }
       if(high!=b)
      {
      vote_b=high-b+1;
      }
       if(high!=c)
      {
      vote_c=high-c+1;
      }
   
    cout<<vote_a<<" "<<vote_b<<" "<<vote_c<<" "<<endl;
   }

   }