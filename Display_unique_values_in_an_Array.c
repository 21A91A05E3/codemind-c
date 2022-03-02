#include<stdio.h>
int main()
{
    int n,i,a[100],j,c=0,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j] && i!=j)
            {
                c++;
            }
        }
        if(c==0)
        {
            d++;
            printf("%d ",a[i]);

        }
    }
    if(d==0)
    {
        printf("-1");
    }
}