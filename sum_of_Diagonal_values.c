#include<stdio.h>
int main()
{
    int r,c,a[1000][1000],i,j,s=0,res;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j || i+j==r-1)
            {
                s=s+a[i][j];
            }
        }
    }

    printf("%d",s);
}