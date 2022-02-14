#include<stdio.h>
int main()
{
    int n,d,m=0;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        if(d>m)
        {
            m=d;
        }
        n=n/10;
    }
    printf("%d",m);
}