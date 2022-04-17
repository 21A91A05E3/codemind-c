#include<stdio.h>
int main()
{
    int n,a[100],i,j,c=1,tc=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j] && i!=j   && a[j]!=-1)
            {
                c++;
                a[j]=-1;
            }
        }
        if(a[i]!=-1)
        printf("%d %d ",a[i],c);

        
    }
}