#include <iostream>
#include <string>
using namespace std;

int main() {
    string ltr1, ltr2;
    getline(cin, ltr1);
    getline(cin, ltr2);

    int charcount[256]={0};

    for(char c:ltr1)
    {
        if(c!=' ')
        {
            charcount[c]++;
        }
    }
    bool found=true;
    for(char c:ltr2)
    {
        if(c!=' ')
        {
            if(charcount[c]>0)
            {
            charcount[c]--;
        }
        
        else 
        {
            
        found=false;
        break;
        }
    }
    }
    
   
     if(found)
     cout<<"YES\n";
     else 
     cout<<"NO\n";
     return 0;
     
}
