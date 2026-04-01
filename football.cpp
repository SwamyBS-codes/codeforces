#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int zero=0,ones=0;
    for (int i=0;i<s.length();i++) {
        
        char c=s[i];
    if (c=='0') {
            zero++;
            ones=0;

        } else 
        {
            ones++;
            zero=0;
        }

        if (zero>=7||ones>=7) {
cout<<"YES"<<endl;
            return 0;
        }
    }

    cout<<"NO"<<endl;
    return 0;
}
