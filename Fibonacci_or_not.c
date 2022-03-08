#include<stdio.h>
int main()
{
    int f1,f2,f3,n;
    scanf("%d",&n);
    if(n==0)
    {
        printf("True");
    }
    f1=0;
    f2=1;
    f3=f1+f2;
    while(f3<n)
    {
        f1=f2;
        f2=f3;
        f3=f1+f2;
    }
    if(f3==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}