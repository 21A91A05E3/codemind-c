#include<stdio.h>
int main()
{
    int n,i,a[100],m=-1,b[100],k=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        m=-1;
        for(j=i+1;j<n;j++)
        {
            if(j>i)
            {
                if(a[j]>m)
                m=a[j];
            }
        }
        b[k]=m;
        k+=1;
    }
    for(i=0;i<k;i++)
    {
        printf("%d ",b[i]);
    }
}