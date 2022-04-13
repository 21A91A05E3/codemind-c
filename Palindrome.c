#include<stdio.h>
int main()
{
    int n,d,r=0,t;
    scanf("%d",&n);
    t=n;
    while(n)
    {
        d=n%10;
        r=(r*10)+d;
        n=n/10;
    }
    if(t==r)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}