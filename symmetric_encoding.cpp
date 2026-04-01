#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string encode, encode1 = "";
        cin >> encode;

        for (int i = 0; i < n; i++) {
            bool found = false;
            for (int j = 0; j < encode1.length(); j++) {
                if (encode[i] == encode1[j]) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                encode1 += encode[i];
            }
        }
        sort(encode1.begin(),encode1.end());
        cout<<encode1<<endl;
        int l=encode1.length();
        for(int i=0;i<l;i++)
        {
            for(int j=i+1;j<l;j++)
            {
            char temp=encode1[j];
            encode1[j]+=encode1[l-1];
            encode1[l-1]+=temp;
            }
        }
        cout<<encode1<<endl;
    }
    return 0;
}
