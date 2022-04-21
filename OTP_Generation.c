#include<stdio.h>
int main()
{
    int n,d,s=0,r=0;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;
    }
    while(r)
    {
        d=r%10;
        if(d%2!=0)
        {
            printf("%d",d*d);
        }
        r=r/10;
    }

}