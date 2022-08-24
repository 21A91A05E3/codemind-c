#include<stdio.h>
int main()
{
    int n,a[100],i,c=0,m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==1)
        {
            c+=1;
        }
        else
        {
            if(c>m)
            {
                m=c;
            }
            c=0;
        }
    }
    if(c>m)
    {
        m=c;
    }
    printf("%d",m);
}