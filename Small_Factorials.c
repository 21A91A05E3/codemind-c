#include<stdio.h>
int main()
{
    int t,n[100],i,f[100],j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<t;i++)
    {
        j=1,f[i]=1;
        while(j<=n[i])
        {
            f[i]=f[i]*j;
            j++;
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%d
",f[i]);
    }
    
}