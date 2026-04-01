#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int c=0,d=0;
   for(int i=0;i<n;++i) 
    {
        int a,b;
        cin>>a>>b;
        c=c-a+b;
        if(c>d) {
            d=c;
        }
    }

    cout<<d<<endl;
    return 0;
}
