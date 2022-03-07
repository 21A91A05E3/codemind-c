#include<stdio.h>
int main()
{
    int n,temp,r,f=1,s=0,i;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        r=n%10;
        f=1;
        for(i=r;i>=1;i--)
        {
            f=f*i;
        }
        s=s+f;
        n=n/10;
    }
    n=temp;
    if(n==s)
    {
        printf("The number ");
        printf("%d ",n);
        printf("is a strong number");
    }
    else
    {
        printf("The number ");
        printf("%d ",n);
        printf("is not a strong number");
    }
    
}