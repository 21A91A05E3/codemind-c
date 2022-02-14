#include<stdio.h>
int main()
{
    int n,d,m=1,s=0,r;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        m=m*d;
        s=s+d;
        n=n/10;
    }
    r=m-s;
    printf("%d",r);
    
}