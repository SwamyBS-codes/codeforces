#include<iostream>
using namespace std;
int main()
{
    char best[5];
    int t;
    cin>>t;
    while(t--)
    {
        cin>>best;
    int best_a=0,best_b=0;
    for(int i=0;i<5;i++)
    {
        if(best[i]=='A')
        best_a++;
        else if(best[i]=='B')
        best_b++;
    }
    
    if(best_a>best_b)
    cout<<"A\n";
    else
    cout<<"B\n";
}

return 0;

}