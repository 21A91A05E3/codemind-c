#include<stdio.h>
int prime(int n)
{
    int c=0,i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
         c++;
    }
    return c;
}
int main()
{
    int n,d,p,dc=0,dp,s=0;
    scanf("%d",&n);
    p=prime(n);
    if(p==2)
    {
        while(n)
        {
            dc++;
            d=n%10;
            dp=prime(d);
            {
                if(dp==2)
                {
                    s++;
                }
            }
            n=n/10;
        }
        if(s==dc)
        {
            printf("Mega Prime");
        }
        else
        {
            printf("Not Mega Prime");
        }
    }
    else
    {
        printf("Not Mega Prime");
    }
}