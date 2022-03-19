#include<stdio.h>
int main()
{
    int a[1000][1000],n,i,j,ps=0,ss=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                ps=ps+a[i][j];
            }
            if(i==n-j-1)
            {
                ss=ss+a[i][j];
            }
        }
    }
    printf("Principal Diagonal:%d
",ps);
    printf("Secondary Diagonal:%d
",ss);
}