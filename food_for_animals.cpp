#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;

 int dogs=0,cats=0;
        
        if (x>a) {
            dogs=x-a;
        }
        if (y>b) {
        cats=y-b;
        }
        if (dogs+cats<=c) {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }
    return 0;
}
