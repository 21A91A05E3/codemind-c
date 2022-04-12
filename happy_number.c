#include<stdio.h>
int main()
{
    int n,s=0,d;
    scanf("%d",&n);
    while(s!=1 && s!=4)
    {
        s=0;
        while(n>0)
        {
            d=n%10;
            s=s+d*d;
            n=n/10;
        }
        n=s;
    }
    if(s==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}