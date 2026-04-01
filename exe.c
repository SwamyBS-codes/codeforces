#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i==n)
        {
            printf(" 1/%.f ",(float)i);
        }
        else
        printf("1/%.f +",(float)i);
    }
    return 0;
}