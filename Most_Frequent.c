#include<stdio.h>
int main()
{
    int n,a[100],i,c,m=0,j=0,me;
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
            if(i!=j && a[i]==a[j] && a[j]!=-1)
            {
                c++;
                a[j]=-1;
            }
        }
        if(c>m)
        {
            m=c;
            me=a[i];
        }
        if(c==m && a[i]<me)
        {
            me=a[i];
        }
    }
    printf("%d ",me);
}