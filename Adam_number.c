#include<stdio.h>
int main()
{
    int n,d,s=0,s1=0,r=0,r1=0;
    scanf("%d",&n);
    s=n*n;
    while(n)
    {
        d=n%10;
        r=(r*10)+d;
        n=n/10;
    }
    s1=r*r;
    while(s1)
    {
        d=s1%10;
        r1=(r1*10)+d;
        s1=s1/10;
    }
    if(s==r1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}