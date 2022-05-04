#include<stdio.h>
int main()
{
    int n,m,i,j,a[100][100],s=0;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        s=0;
        for(j=0;j<n;j++)
        {
            s=s+a[i][j];
        }
        printf("%d ",s);
    }
}