#include<stdio.h>
int s(int n)
{
    int i,d,dc=0,temp,c=0;
    temp=n;
    while(n>0)
    {
        d=n%10;
        if(d==0)
        {
            return 0;
        }
        else if(temp%d==0)
        {
            c++;
        }
        dc++;
        n=n/10;
    }
    if(dc==c)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(s(i)==1)
        {
            printf("%d ",i);
        }
    }
}