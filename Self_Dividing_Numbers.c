#include<stdio.h>
int s(int n)
{
    int i,d,y=0,x,c=0;
    x=n;
    while(n>0)
    {
        d=n%10;
        if(d==0)
        {
            return 0;
        }
        else if(x%d==0)
        {
            c++;
        }
        y++;
        n=n/10;
    }
    if(y==c)
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