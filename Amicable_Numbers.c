#include<stdio.h>
int main()
{
    int a,b,d,s1=0,s2=0,i;
    scanf("%d%d",&a,&b);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            s1=s1+i;
        }
    }
    for(i=1;i<b;i++)
    {
        if(b%i==0)
        {
            s2=s2+i;
        }
    }
    if(s1==b && s2==a)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}