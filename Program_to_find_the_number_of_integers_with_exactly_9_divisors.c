#include<stdio.h>
int main()
{
    int n,i,dc=0,c=0,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=0;
        for(j=1;j<=n;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==9)
        {
            dc++;
            printf("%d ",i);
        }
    }
    printf("
Total=%d",dc);
}