#include<stdio.h>
int main()
{
    int n,d,s=0;
    scanf("%d",&n);
    while(s>9 || s==0)
    {
        s=0;
        while(n>0)
        {
            d=n%10;
            s=s+d;
            n=n/10;
        }
        n=s;
    }
    printf("%d",s);
    
}