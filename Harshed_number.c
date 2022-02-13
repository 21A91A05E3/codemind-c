#include<stdio.h>
int main()
{
    int n,d,s=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        d=n%10;
        n=n/10;
        s=s+d;
    }
    if(temp%s==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}