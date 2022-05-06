#include<stdio.h>
int main()
{
    int a[100],b[100],c[100],i,m,n,j,k=0,x,dc=0;
    scanf("%d",&m);
    scanf("%d",&n);
    for(i=0; i<m; i++)
        scanf("%d",&a[i]);
    for(i=0; i<n; i++)
        scanf("%d",&b[i]);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                dc=0;
                for(x=0; x<k; x++)
                {
                    if(a[i]==c[x])
                        dc++;
                }
                if(dc==0)
                {
                    c[k]=a[i];
                    k++;
                }
            }
        }
    }
    printf("%d",k);
    return 0;
}