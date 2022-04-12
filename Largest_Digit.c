#include<stdio.h>
int main()
{
    int n,d,max=0;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        if(d>max)
        {
            max=d;
        }
        n=n/10;
    }
    printf("%d",max);
}