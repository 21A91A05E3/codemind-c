#include<stdio.h>
int main()
{
    int n,d,r=0;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        n=n/10;
        r=(r*10)+d;
    }
    printf("%d",r);
    
}