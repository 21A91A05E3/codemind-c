#include<stdio.h>
int main()
{
    int n,a[100],i,j,c=0,p=0;
    float s=0,av;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        c=0;
        for(j=1;j<=a[i];j++)
        {
            if(a[i]%j==0)
            c++;
        }
        if(c==2)
        {
            p++;
            s=s+a[i];
        }
    }
    av=float(s/p);
    printf("%.2f",av);
}