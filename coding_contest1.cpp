#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,m;
        cin>>n>>m;
        if (n>=m &&  (m-n) % 2 == 0) {
            cout <<"Yes"<<endl;
            //break;

        }


         else {
            cout<<"No"<<endl;
        }
    }

    return 0;
}
