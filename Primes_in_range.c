#include<stdio.h>
#include<math.h>
int factor(int i)
{
    int j,fc=2,sq;
    sq=sqrt(i);
    if(i==1)
    {
        return 1;
    }
    for(j=2;j<=sq;j++)
    {
        if(i%j==0)
        {
            fc+=2;
        }
    }
    if(sq*sq==i)
    {
        fc-=1;
    }
    return fc;
}
int main()
{
    int m,n,i,fc,p=0;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        fc=factor(i);
        if(fc==2)
        {
            p++;
        }
    }
    printf("%d",p);
}