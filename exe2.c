#include<stdio.h>
int main()
{
    int A[3]={5,6,15};
    A[1]=10;
    int i=0;
    while(i<3)
    {
        printf("%d ",A[i]);
        i++;
    }
    
    return 0;
    }
