#include<iostream>
int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        int a,b,n,count=0;
        std::cin>>a>>b>>n;
        while(a<=n && b<=n)
        {
            if(a<b)
            {
                a+=b;
            }
            else 
            b+=a;
            count++;
        }
        std::cout<<count++<<std::endl;
    }
}



