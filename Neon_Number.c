#include<stdio.h>
int main()
{
    int n,s,d,a=0,t;
    scanf("%d",&n);
    s=n*n;
    t=s;
    while(s)
    {
        d=s%10;
        a=a+d;
        s=s/10;
    }
    s=t;
    if(n==a)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}