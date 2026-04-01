#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
            int n;
        cin>>n;
        int count=0;
            int sqrtn=(int)sqrt((double)n); 
for (int i=1;i<=sqrtn; ++i) {
            if (n%i==0) 
            {
                if(i%2==0) 
                {
                    count++;
                 }
                    if (i!=n/i && (n/i)%2==0)
                     {
                    count++;
                 }
               }
        }
        
        cout<<count<<endl;
    }
    
    return 0;
}
