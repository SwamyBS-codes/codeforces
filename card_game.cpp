#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a1,a2,b1,b2;
        cin>>a1>>a2>>b1>>b2;

        int winner=0;
       
        int suneetWins=0;
        int slavicWins=0;

        suneetWins=(a1>b1)+(a2>b2);
        slavicWins=(a1<b1)+(a2<b2);
        if(suneetWins>slavicWins) 
        winner++;

        suneetWins=(a1>b2)+(a2>b1);
        slavicWins=(a1<b2)+(a2<b1);
        if(suneetWins>slavicWins)
         winner++;

     
        suneetWins=(a2>b1)+(a1>b2);
        slavicWins=(a2<b1)+(a1<b2);
        if(suneetWins>slavicWins)
         winner++;

     
        suneetWins=(a2>b2)+(a1>b1);
        slavicWins=(a2<b2)+(a1<b1);
        if(suneetWins>slavicWins) 
        winner++;

   
        cout << winner << endl;
    }
    return 0;
}
