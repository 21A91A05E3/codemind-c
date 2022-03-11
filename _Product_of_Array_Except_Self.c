#include<stdio.h>
int main()
{
    int n,i,a[100],m=1,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        m=1;
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                continue;
            }
            else
            {
                m=m*a[j];
            }
        }
        printf("%d ",m);
    }
}