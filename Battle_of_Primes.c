#include<stdio.h>
int prime(int s)
{
    int i,j,s1,k,c=0;
    for(i=1;i<10;i++)
    {
        c=0;
        s1=s+i;
        for(j=2;j<s1;j++)
        {
            if(s1%j==0)
            c++;
        }
        if(c==0)
        {
            k=i;
            break;
        }
    }
    return k;
}
int main()
{
    int m,n,s,k;
    scanf("%d%d",&m,&n);
    s=m+n;
    k=prime(s);
    printf("%d",k);
}